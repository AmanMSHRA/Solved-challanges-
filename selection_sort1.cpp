#include<bits/stdc++.h>
using namespace std;


                    int get_Min(int arr[],int l,int r)
                    {
                        int temp = l;

                        for(int i = l+1;l<r;i++)
                        {
                            if(arr[i]<arr[temp])
                            {
                                temp  = i;
                            }
                        }

                        return (temp);
                    }
                    void selection_sort(int arr[],int n)
                    {
                        for(int i=0;i<n-1;i++)
                        {
                            //int m = get_Min(arr,i,n);
                            int temp = i;

                            for(int j = i+1;j<n;j++)
                            {
                               if(arr[j]<arr[temp])
                               {
                                  temp  = j;
                               }
                            }

                            swap(arr[i],arr[temp]);
                        }

                    }
                    int main()
                    {
                        int arr[] = {45,23,11,22,5,6};
                        int n = sizeof(arr)/sizeof(arr[0]);

                        selection_sort(arr,n);

                        for(int i=0;i<n;i++)
                       {
                           cout<<arr[i]<<",";
                       }

                        return 0;
                    }
