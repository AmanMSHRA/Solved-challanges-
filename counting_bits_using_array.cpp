#include<bits/stdc++.h>
using namespace std;

                    int count_bits(int i)
                    {
                       if(i==1)
                       {
                           return 1;
                       }

                       if(i%2==0)
                       {
                          return count_bits(i/2);
                       }
                       else{
                          return count_bits(i/2)+1;
                       }
                    }

                    void count_bits1(int arr[],int n)
                    {

                       arr[0] = 0;
                       arr[1] = 1;

                       for(int i=2;i<n;i++)
                       {
                           if(i%2==0)
                           {
                               arr[i] = arr[i/2];
                           }
                           else{
                               arr[i] = 1+arr[i/2];
                           }
                       }

                       cout<<arr[n-1]<<",";
                    }

                    int main()
                    {
                       int n;

                       cin>>n;

                       cout<<count_bits(n)<<endl;

                       int arr[n+1];

                      count_bits1(arr,n+1);

                       return 0;
                    }
