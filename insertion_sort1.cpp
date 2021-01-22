#include<bits/stdc++.h>
using namespace std;
                    void Sort(int i,int len,int arr[])
                    {
                       for(int j = len;j<i;j++)
                       {
                           if(arr[j] > arr[i])
                           swap(arr[j],arr[i]);
                       }
                    }
                    void insertion_sort(int arr[],int n)
                    {
                        for(int i=1;i<n;i++)
                        {
                            Sort(i,0,arr);
                        }
                    }

                    int main()
                    {
                        int arr[] = {6,4,1,2,0,7};
                        int n = sizeof(arr)/sizeof(arr[0]);

                        insertion_sort(arr,n);

                        for(int i=0;i<n;i++)
                        {
                            cout<<arr[i]<<",";
                        }

                        return 0;
                    }
