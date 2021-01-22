#include<bits/stdc++.h>
using namespace std;

                    void contruct_heap(int arr[],int n,int i)
                    {
                        int largest = i;
                        int l = 2*i+1;
                        int r = 2*i+2;

                        if(l < n && arr[l] < arr[largest])
                        {
                           largest = l;
                        }

                        if(r < n && arr[r] < arr[largest])
                        {
                           largest = r;
                        }

                        if(largest != i)
                        {
                            swap(arr[i],arr[largest]);
                            contruct_heap(arr,n,largest);
                        }




                    }

                    void create_heap(int arr[],int n)
                    {
                        int index  = (n/2)-1;

                        for(int i=index;i>=0;i--)
                        {
                           contruct_heap(arr,n,i);
                        }

                    }

                    int main()
                    {

                      int arr[] = {1,2,3,4,5,6,7,8};
                      int n = sizeof(arr)/sizeof(arr[0]);

                      int index  = (n/2)-1;

                      for(int i=index;i>=0;i--)
                      {
                        contruct_heap(arr,n,i);
                      }

                      for(int i=0;i<n;++i)
                      {
                          cout<<arr[i]<<",";
                      }

                      return 0;
                    }
