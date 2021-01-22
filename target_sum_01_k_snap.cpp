#include<bits/stdc++.h>
using namespace std;

                    int target_sum_01_ksnap(int arr[],int n,int t,int sum)
                    {
                        if(sum==n && t==0)
                        {
                            return 1;
                        }
                        else if( sum > n)
                        {
                            return 0;
                        }
                        else{
                            //cout<<t<<endl;
                            return target_sum_01_ksnap(arr,n,t+arr[sum],sum+1) + target_sum_01_ksnap(arr,n,t-arr[sum],sum+1);

                        }

                    }

                    int main()
                    {
                        int arr[] = {1,1,1,1,1};
                        int t = 3;
                        int n = sizeof(arr)/sizeof(arr[0]);

                        int sum = 0;

                       sum =  target_sum_01_ksnap(arr,n,t,sum);
                       cout<<sum<<endl;
                        return 0;
                    }
