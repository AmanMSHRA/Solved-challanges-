#include<bits/stdc++.h>
using namespace std;

                   int partion(int arr[],int l,int r)
                   {
                       int pivot = arr[r];
                       int i = l-1;

                       for(int j=l;j<=r-1;j++)
                       {
                           if(arr[j] < pivot)
                           {
                               i++;
                               swap(arr[j],arr[i]);
                           }
                       }

                       swap(arr[i+1],arr[r]);

                       return (i+1);
                   }

                   void quick_sort(int arr[],int l,int r)
                   {
                       if(l<r)
                       {
                           int pi = partion(arr,l,r);

                           quick_sort(arr,l,pi-1);

                           quick_sort(arr,pi+1,r);
                       }
                   }

                   int main()
                   {
                       int arr[] = {6,4,0,1,2,9};
                       int n = sizeof(arr)/sizeof(arr[0]);

                       quick_sort(arr,0,n-1);

                       for(int i=0;i<n;i++)
                       {
                           cout<<arr[i]<<",";
                       }


                       return 0;
                   }
