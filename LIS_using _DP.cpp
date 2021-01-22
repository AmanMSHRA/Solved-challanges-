#include<bits/stdc++.h>
using namespace std;

                     void LIS(int lis[],int n,int arr[])
                     {
                         for(int i=1;i<n;i++)
                         {
                             for(int j = 0;j<i;j++)
                             {
                                 if(arr[i]>=arr[j] && lis[i]<=lis[j])
                                 {
                                     lis[i] = 1 + lis[j];
                                 }
                             }
                         }

                         cout<<"longest increasing subsequence :"<<lis[n-1]<<endl;

                         int INDEX = INT_MIN;
                         int Count = 1;

                         for(int i=0;i<n;i++)
                         {
                             if(INDEX < lis[i])
                             {
                                 cout<<arr[i]<<",";
                                 INDEX = lis[i];
                             }
                             if(lis[i]==lis[i-1])
                             {
                                Count++;
                             }
                         }
                         cout<<endl;
                         cout<<"No. of LIS :"<<Count;
                     }

                     int main()
                     {
                         int arr[] = {5,8,7,1,9};
                         int n  = sizeof(arr)/sizeof(arr[0]);

                         int lis[n] = {1};

                         LIS(lis,n,arr);

                         return 0;
                     }
