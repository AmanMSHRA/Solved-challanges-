#include<bits/stdc++.h>
using namespace std;
                     int get_coin_01_k_snap(int c[],int sum,int n)
                     {
                         if(n==0 || sum <=0)
                         {
                             return 0;
                         }
                         else if(c[n-1]>sum)
                         {
                             return  get_coin_01_k_snap(c,sum,n-1);
                         }
                         else{
                           // cout<<c[n-1]<<endl;
                            return max(1+get_coin_01_k_snap(c,sum-c[n-1],n-1),get_coin_01_k_snap(c,sum,n-1));
                         }
                     }
                     int main()
                     {
                         int c[] = {7,1,2,5,3};
                         int s = 5;
                         int n = sizeof(c)/sizeof(c[0]);

                         int coin = 0;
                         coin = get_coin_01_k_snap(c,s,n);

                         cout<<coin<<endl;

                         return 0;
                     }
