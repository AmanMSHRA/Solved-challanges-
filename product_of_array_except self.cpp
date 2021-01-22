#include<bits/stdc++.h>
using namespace std;

                    void Get_product(int arr[],int n)
                    {
                       int sum = 1;
                       for(int i=0;i<n;i++)
                       {
                           sum = sum*arr[i];
                       }

                       for(int i=0;i<n;i++)
                       {
                          arr[i] = sum/arr[i];
                       }


                       for(int i=0;i<n;i++)
                       {
                         cout<<arr[i]<<",";
                       }

                    }

                    void Get_product1(int arr[],int n)
                    {

                        int temp[n];

                        for(int i=0;i<n;i++)
                        {
                           int sum = 1;
                           for(int j=0;j<n;j++)
                           {
                               if(j==i)
                               {
                                   continue;
                               }
                               else{
                                  sum = sum*arr[j];
                               }
                           }
                           temp[i] = sum;
                        }

                       for(int i=0;i<n;i++)
                       {
                         cout<<temp[i]<<",";
                       }
                    }

                    int main()
                    {
                        int arr[] = {1,5,2,7};
                        int n = sizeof(arr)/sizeof(arr[0]);

                        Get_product1(arr,n);

                        cout<<endl;
                        cout<<"Time Complexity : N(square)"<<endl;

                        Get_product(arr,n);
                        cout<<endl;
                        cout<<"Time Complexity : 2N"<<endl;


                        return 0;
                    }
