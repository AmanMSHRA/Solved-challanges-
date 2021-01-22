#include<bits/stdc++.h>
using namespace std;

                    int Get_unique(int arr[],int l,int r)
                    {
                        int m = l+(r-l)/2;

                        if(arr[m]!=arr[m-1] && arr[m]!=arr[m+1])
                        {
                            return arr[m];
                        }

                        if(arr[m]==arr[m-1] && m%2==1 || arr[m]==arr[m+1] && m%2==0)
                        {
                            return Get_unique(arr,m+1,r);
                        }
                        else{
                            return Get_unique(arr,l,m-1);
                        }

                    }

                    int find_unique(int arr[],int n)
                    {
                       int l=0;
                       int r=n-1;
                       int m;

                       if(arr[l]!=arr[l+1])
                       {
                           cout<<arr[l]<<endl;
                       }

                       if(arr[r]!=arr[r-1])
                       {
                           cout<<arr[r]<<endl;
                       }

                        cout<<Get_unique(arr,0,n)<<endl;


                    }


                    int main()
                    {
                        int arr[] = {1,2,2,1,3,3,4};
                        int n = sizeof(arr)/sizeof(arr[0]);

                        find_unique(arr,n);

                        return 0;
                    }
