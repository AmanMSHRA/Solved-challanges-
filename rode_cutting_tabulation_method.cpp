#include<bits/stdc++.h>
using namespace std;

                    void cal_profit(int l[],int p[],int L,int n)
                    {
                        int dp[n+1][L+1];

                        for(int i=0;i<n+1;i++)
                        {
                            for(int j=0;j<L+1;j++)
                            {
                                if(i==0)
                                {
                                    dp[i][j] = 1;
                                }
                                else if(j==0)
                                {
                                    dp[i][j] = 0;
                                }
                                else if(l[i] > j)
                                {
                                     dp[i][j] =  dp[i-1][j];
                                }
                                else{
                                     dp[i][j] = max( dp[i-1][j], p[i]+dp[i][j-l[i]]);
                                }
                            }
                        }

                        for(int i=0;i<n+1;i++)
                        {
                            for(int j=0;j<L+1;j++)
                            {
                                cout<<dp[i][j]<<",";
                            }
                            cout<<endl;
                        }
                    }

                    int main()
                    {
                        int l[] = {1,3,2,1};
                        int p[] = {4,2,4,8};
                        int L = 4;
                        int n = sizeof(l)/sizeof(l[0]);

                        cal_profit(l,p,L,n);

                        return 0;
                    }
