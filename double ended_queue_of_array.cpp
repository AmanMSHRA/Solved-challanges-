#include<bits/stdc++.h>
using namespace std;
                     void Enqueue_rear_end(int arr[],int n,int data)
                     {
                         if(arr[n]==0)
                         {
                             arr[n] = data;
                         }
                         else{
                          for(int i=n;i>0;i--)
                          {
                             if(arr[i]==0)
                             {
                                arr[i] = data;
                                break;
                             }
                          }
                         }
                     }

                     void Enqueue_front_end(int arr[],int n,int data)
                     {
                         if(arr[n]==0)
                         {
                             arr[n] = data;
                         }
                         else{
                          for(int i=n;i>0;i--)
                          {
                             if(arr[i]==0)
                             {
                                arr[i] = data;
                                break;
                             }
                          }
                         }
                     }

                     void Dnqueue_rear_end(int arr[],int n)
                     {
                         for(int i=0;i<n;i++)
                         {
                             if(arr[i]>0)
                             {
                                 arr[i] = 0;
                                 break;
                             }
                         }

                     }

                     void Dnqueue_front_end(int arr[],int n)
                     {
                        for(int i=n-1;i>0;i--)
                        {
                            if(arr[i]>0)
                            {
                              arr[i] = 0;
                              break;
                            }
                        }

                     }

                     void display_rear_end(int arr[],int n)
                     {
                         for(int i=0;i<n;i++)
                         {
                            cout<<arr[i]<<",";
                         }
                         cout<<endl;
                     }

                     void display_front_end(int arr[],int n)
                     {
                         for(int i=n-1;i>=0;i--)
                         {
                            cout<<arr[i]<<",";
                         }
                         cout<<endl;
                     }


                     int main()
                     {
                         int arr[] = {0,0,0,0,0,0,0,0,0,0};
                         int n = sizeof(arr)/sizeof(arr[0]);

                         Enqueue_rear_end(arr,n,1);
                         Enqueue_front_end(arr,n,2);
                         Enqueue_rear_end(arr,n,3);
                         Enqueue_front_end(arr,n,4);

                    //    Dnqueue_rear_end(arr,n);
                      //  Dnqueue_front_end(arr,n);

                        // display_rear_end(arr,n);
                         //display_front_end(arr,n);

                         Enqueue_front_end(arr,n,4);
                            display_rear_end(arr,n);
                         display_front_end(arr,n);

                         return 0;
                     }
