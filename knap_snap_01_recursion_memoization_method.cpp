#include<bits/stdc++.h>
using namespace std;

                    int K_snap_01(int wt[],int pi[],int sw,int p,int w)
                    {
                        if(sw==0)
                        {
                           return 0;
                        }
                        else if(wt[sw] > w)
                        {
                           p += K_snap_01(wt,pi,sw-1,p,w);
                        }
                        else{
                           p += max(K_snap_01(wt,pi,sw-1,p,w), (p+pi[sw] + K_snap_01(wt,pi,sw-1,p,w-wt[sw])));
                        }
                        return p;
                    }

                    int main()
                    {
                        int wt[] = {3,4,2};
                        int pi[] = {4,2,3};
                        int sw = sizeof(wt)/sizeof(wt[0]);
                        int sp = sizeof(pi)/sizeof(pi[0]);

                        int p = 0;
                        p = K_snap_01(wt,pi,sw,0,4);

                        cout<<p;

                        return 0;
                    }
