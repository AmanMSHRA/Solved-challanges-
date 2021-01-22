#include<bits/stdc++.h>
using namespace std;
                       int knap_snap_01(int w[],int p[],int w1,int p1,int W,unordered_map<int,int>mem)
                       {
                           if(w1 == 0 || W <= 0)
                           {
                               return 0;
                           }

                           if(mem[w1+W]!=0)
                           {
                               cout<<mem[w1+W]<<endl;
                               return mem[w1+W];
                           }
                           else{
                              if(w[w1] > W)
                              {
                                  // cout<<mem[w1+W]<<endl;
                                  return knap_snap_01(w,p,(w1-1),p1,W,mem);
                              }
                              else{
                                 mem[w1+W] = max(knap_snap_01(w,p,(w1-1),p1,W,mem), p[w1] + knap_snap_01(w,p,(w1-1),p1,(W-w[w1]),mem));
                                // cout<<mem[w1+W]<<endl;
                                 return mem[w1+W];
                              }
                           }
                       }

                       int main()
                       {
                           int w[] = {3,2,4};
                           int p[] = {6,8,7};
                           int W = 6;

                           int w1 = sizeof(w)/sizeof(w[0]);
                           int p1 = sizeof(p)/sizeof(p[0]);

                           unordered_map<int,int>mem;

                           cout<<knap_snap_01(w,p,w1,p1,W,mem)<<endl;

                           for(auto x:mem)
                           {
                               cout<<x.first <<":"<<x.second<<endl;
                           }

                           return 0;
                       }
