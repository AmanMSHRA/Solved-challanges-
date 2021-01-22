#include<bits/stdc++.h>
using namespace std;

                    int cal_profit(int l[],int p[],int n,int n1,int profit,int wt,unordered_map<int,int>Map)
                    {
                        if(wt==n1 || n<=0)
                        {
                            return 0;
                        }
                        if(Map[n+l[wt]]!=0)
                        {
                            return Map[n+l[wt]];
                        }
                        else {
                           if(l[wt] > n)
                           {
                               return cal_profit(l,p,n,n1,profit,wt+1,Map);
                           }
                           else{
                             Map[n+l[wt]] = max(p[wt]+cal_profit(l,p,n-l[wt],n1,profit,wt+1,Map),cal_profit(l,p,n,n1,profit,wt+1,Map));
                             return Map[n+l[wt]];
                           }
                       }
                    }

                    int main()
                    {
                        int l[] = {1,1,2,3};
                        int p[] = {4,2,4,8};
                        int L = 4;
                        int n = sizeof(l)/sizeof(l[0]);
                        unordered_map<int,int>Map;


                        cout<<cal_profit(l,p,L,n,0,0,Map)<<endl;

                        return 0;
                    }
