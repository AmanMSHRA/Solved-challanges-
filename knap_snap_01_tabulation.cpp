#include<bits/stdc++.h>
using namespace std;

                   void tabulation_10(int wt[],int p[],int n1,int n2,int w)
                   {

                       int dp[n1+1][w+1];

                       for(int i=0;i<n1+1;i++)
                       {
                          for(int j=0;j<w+1;j++)
                          {
                              if(i==0 || j==0)
                              {
                                  dp[i][j] = 0;
                              }
                              else if(wt[i-1]>j)
                              {
                                  dp[i][j] = dp[i-1][j];
                              }
                              else{
                                dp[i][j] = max(dp[i-1][j],p[i-1]+dp[i-1][w-wt[i-1]]);
                              }
                          }
                       }

                       for(int i=0;i<n1+1;i++)
                       {
                          for(int j=0;j<w+1;j++)
                          {
                            cout<<dp[i][j]<<",";
                          }
                          cout<<endl;
                       }


                   }
                   int main()
                   {
                       int wt[] = {3,4,5};
                       int p[] = {4,2,6};
                       int w = 6;

                       int n1 = sizeof(wt)/sizeof(wt[0]);
                       int n2 = sizeof(p)/sizeof(p[0]);

                       tabulation_10(wt,p,n1,n2,w);

                       return 0;
                   }
