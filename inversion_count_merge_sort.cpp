#include<bits/stdc++.h>
using namespace std;

                    int Count_inversion(int arr[],int Count,int l,int m,int r)
                    {
                        int i = l;
                        int j = r-m;

                        while(i <= m && j <= r)
                        {
                            if(arr[i] > arr[j])
                            {
                                i++;
                                Count = Count + (m-i);
                            }
                            else{
                                j++;
                            }
                        }
                        while(i <= m-1)
                        {
                            i++;
                          //  Count++;
                        }
                        while(j <= r)
                        {
                            j++;
                           // Count++;
                        }

                      return Count;
                    }

                    int merge_Count(int arr[],int Count,int l,int r)
                    {
                       if(l<r)
                       {
                          int m = (l+r)/2;

                         merge_Count(arr,Count,l,m);

                         merge_Count(arr,Count,m+1,r);

                        return (Count_inversion(arr,Count,l,m+1,r));
                       }
                       return Count;
                    }

                    int main()
                    {
                        int arr[] = {4,3,2,1};
                        int n = sizeof(arr)/sizeof(arr[0]);
                        int Count = 0;
                        Count = (merge_Count(arr,Count,0,n));

                        cout<<Count<<endl;

                        return 0;
                    }
