#include<bits/stdc++.h>
using namespace std;
#define n 5
                      int Get_min(bool mst[],int w[])
                      {
                          int index;
                          int Min = INT_MAX;

                          for(int i=0;i<n;i++)
                          {
                              if(mst[i]!=true && w[i] < Min)
                              {
                                  Min = w[i];
                                  index = i;
                              }
                          }
                          return index;
                      }

                       void MST(int dp[n][n])
                       {
                           bool mst[n];
                           int w[n];
                           int p[n];

                            for (int i = 0; i < n; i++)
                                w[i] = INT_MAX, mst[i] = false;

                           p[0] = -1;
                           w[0] = 0;

                           for(int i = 0;i<n-1;i++)
                           {

                               int u = Get_min(mst,w);
                               mst[u] = true;
                               for(int j = 0;j<n;j++)
                               {
                                   if(dp[u][j] < w[j] && mst[j]!=true && dp[u][j]!=0)
                                   {
                                       p[j] = u;
                                       w[j] = dp[u][j];
                                   }
                               }
                           }

                           for(int i=1;i<n;i++)
                           {
                               cout<<p[i]<<",";
                           }
                       }

                       int main()
                       {
                          int dp[n][n] = { { 0, 2, 0, 6, 0 },
                                           { 2, 0, 3, 8, 5 },
                                           { 0, 3, 0, 0, 7 },
                                           { 6, 8, 0, 0, 9 },
                                           { 0, 5, 7, 9, 0 } };

                          MST(dp);
                        return 0;

                       }
