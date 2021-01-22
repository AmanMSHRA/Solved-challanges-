#include<bits/stdc++.h>
using namespace std;


                       int remove_dub(int arr[],int n)
                       {
                          int U = 0;
                          int Count = 0;

                          for(int i=0;i<n;i++)
                          {
                              if(U != arr[i])
                              {
                                  U = arr[i];
                                  arr[U] = U;
                                  Count++;
                              }
                          }
                          return Count;
                       }

                       int main()
                       {
                           int arr[] = {0,0,1,1,1,2,2,3,3,4};
                           int n = sizeof(arr)/sizeof(arr[0]);


                           n = remove_dub(arr,n);

                           for(int i=0;i<=n;i++)
                           {
                              cout<<arr[i]<<",";
                           }

                           return 0;
                       }
