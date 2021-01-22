#include<bits/stdc++.h>
using namespace std;

                     void LCS_substring(string s1,string s2,int n1,int n2)
                     {
                         int dp[n2][n1];

                         for(int i=0;i<n2;i++)
                         {
                             for(int j=0;j<n1;j++)
                             {
                                 if(i==0 || j==0)
                                 {
                                     dp[i][j] = 0;
                                 }
                                 else if(s2[i] == s1[j] )
                                 {
                                     dp[i][j]  =  dp[i-1][j-1] + 1;
                                 }
                                 else{
                                    dp[i][j]  = max(dp[i-1][j] , dp[i][j-1]);
                                 }
                             }
                         }
                         for(int i=0;i<n2;i++)
                         {
                             for(int j=0;j<n1;j++)
                             {
                                  cout<<dp[i][j]<<",";
                             }
                             cout<<endl;
                         }

                     }

                     int main()
                     {
                         string s1 = "ABCDGH";
                         string s2 = "ACDGHR";

                         int n1 =  s1.length();
                         int n2 =  s2.length();

                         LCS_substring(s1,s2,n1,n2);

                         return 0;
                     }
