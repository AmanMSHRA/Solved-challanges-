#include<bits/stdc++.h>
using namespace std;

                     int find_subarray_to_k(int arr[],int n,int k)
                     {
                         int sum = 0;
                         int L = 0;
                         int Count = 0;
                         map<int ,int>Map;

                         for(int i=0;i<n;i++)
                         {
                             sum = sum + arr[i];
                             Map[sum] = 1;
                             if(sum==k || Map[sum-k]!=0)
                             {
                               cout<<"Size of the sub-array :"<<L+1<<","<<i+1<<endl;
                               Count++;
                               L = i;
                             }
                         }

                         return Count;


                     }


                     int main()
                     {
                         int arr[] = {3,4,7,2,-3,1,4,2};
                         int n = sizeof(arr)/sizeof(arr[0]);


                         cout<<find_subarray_to_k(arr,n,7)<<endl;

                         return 0;
                     }
