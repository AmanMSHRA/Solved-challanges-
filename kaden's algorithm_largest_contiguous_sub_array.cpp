#include<bits/stdc++.h>
using namespace std;

                       void kadans_algo(int arr[],int n)
                       {
                          int l,r;
                          int meh = 0;
                          int msf = INT_MIN;

                          for(int i=0;i<n;i++)
                          {
                             meh = meh+arr[i];

                             if(meh < arr[i])
                             {
                                 meh = arr[i];
                                 l = i;
                             }

                             if(msf < meh)
                             {
                                 msf = meh;
                                 r = i;
                             }
                          }

                          cout<<"largest sum of Contiguous Array :"<<msf<<endl;

                          for(int i =l;i<=r;i++)
                          {
                              cout<<arr[i]<<",";
                          }
                       }

                       int main()
                       {
                           int arr[] = {-2,-3,4,-1,-2,1,5,-3};
                           int n = sizeof(arr)/sizeof(arr[0]);

                           kadans_algo(arr,n);

                           return 0;
                       }
