#include<bits/stdc++.h>
using namespace std;
                    int get_efficient_ans(int arr[],int i,int n)
                    {
                       if(i == n)
                       {
                           return 0;
                       }
                       int k;
                       int Count;
                       int Min = INT_MAX;


                       for(k=i;k<n;k++)
                       {
                           Count =  get_efficient_ans(arr,i,k) +  get_efficient_ans(arr,k+1,n) + arr[i-1] * arr[k] * arr[n];

                           if(Count < Min)
                           {
                              Min = Count;
                           }
                       }
                       return Count;
                    }

                    int main()
                    {
                        int arr[] = {1,2,3,4,3};
                        int n = sizeof(arr)/sizeof(arr[0]);

                        cout<<get_efficient_ans(arr,1,n-1);

                        return 0;
                    }
