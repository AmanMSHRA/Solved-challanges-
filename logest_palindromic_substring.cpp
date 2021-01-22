#include<bits/stdc++.h>
using namespace std;

                    void check_LPS(string s1,int n1)
                    {
                        int dp[n1][n1];
                        int Count1 = 0;

                        memset(dp, 0, sizeof(dp));
                        for(int i=0;i<n1;i++)
                        {
                            dp[i][i] = 1;
                            if(s1[i]==s1[i+1])
                            {
                                 dp[i][i+1] = 1;
                            }
                            else{
                                dp[i][i+1] = 0;
                            }
                        }


                        for(int k=3;k<=n1;++k)
                        {
                            for(int i=0;i<n1-k+1;++i)
                            {
                              int j = i+k-1;

                              if(s1[i] == s1[j] && dp[i+1][j-1]==1)
                              {
                                  dp[i][j] =  dp[i+1][j-1];
                              }
                            }

                        }

                        for(int i=0;i<n1;i++)
                        {
                            for(int j=0;j<n1;j++)
                            {
                              cout<<dp[i][j]<<",";
                            }
                            cout<<endl;
                        }
                        cout<<"longest.P.S is :"<<Count1<<endl;


                    }

                    int main()
                    {
                       string s1 = "aaaabbaa";
                       int n1 = s1.length();

                       check_LPS(s1,n1);

                       return 0;
                    }
