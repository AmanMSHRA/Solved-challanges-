#include<bits/stdc++.h>
using namespace std;

                  void K_snap_01(int wt[],int p[],int ws,int ps,int w)
                  {
                     int dp[ps+1][ws+1];

                     for(int i=0;i<ps+1;i++)
                     {
                         for(int j=0;j<ws+1;j++)
                         {
                             if(i==0 || j==0)
                             {
                                dp[i][j] =  0;
                             }
                             else if(wt[i-1] > j)
                             {
                                 dp[i][j] =  dp[i-1][j];
                             }
                             else{
                                 dp[i][j] = max( dp[i-1][j] , p[i-1] + dp[i-1][w-wt[j-1]] );
                             }
                         }
                     }


                     for(int i=0;i<ps+1;i++)
                     {
                         for(int j=0;j<ws+1;j++)
                         {
                             cout<<dp[i][j]<<",";
                         }

                         cout<<endl;
                     }


                  }

                  int main()
                  {
                      int wt[] = {3,4,2};
                      int p[] = {4,2,3};
                      int sw = sizeof(wt)/sizeof(wt[0]);
                      int sp = sizeof(p)/sizeof(p[0]);
                      int w = 4;

                      K_snap_01(wt,p,sw,sp,w);

                      return 0;
                  }
