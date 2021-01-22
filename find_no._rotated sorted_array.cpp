#include<bits/stdc++.h>
using namespace std;

                     int find_Bvart(int arr[],int l,int r)
                     {
                         if(l <= r)
                         {
                            int m = (r-l)/2;

                            if(arr[m] > arr[m-1] && arr[m] > arr[m+1])
                            {
                                return m;
                            }
                            if(arr[m] < arr[l])
                            {
                               return find_Bvart(arr,l,m);
                            }
                            else{
                               return find_Bvart(arr,m,r);
                            }
                         }
                     }

                     int get_traget(int arr[],int l,int r,int t)
                     {
                         if(l <= r)
                         {
                             int m = r-l/2;

                             if(arr[m]==t)
                             {
                                 return arr[m];
                             }

                             if(t < arr[m]){
                                return get_traget(arr,l,m,t);
                             }
                             else{
                                return get_traget(arr,m,r,t);
                             }
                         }
                     }

                     int main()
                     {
                         int arr[] = {7,8,0,1,2,3,4,5,6};
                         int n = sizeof(arr)/sizeof(arr[0]);

                         int i = find_Bvart(arr,0,n-1);

                         if(i==5)
                         {
                             cout<<i<<endl;
                         }
                         else if(arr[0] < 5 && arr[i] > 5)
                         {
                            cout<<get_traget(arr,0,i,5);
                         }
                         else{
                            cout<<get_traget(arr,i+1,n,5);
                         }




                         return 0;
                     }
