#include<bits/stdc++.h>
using namespace std;


                    void merge_arr(int arr1[],int arr2[],int n1,int n2)
                    {

                       for(int i=n2-1;i>=0;i--)
                       {
                           int last  = arr1[n1-1];

                           for(int j = n1-2;j>=0;j--)
                           {
                              if(arr2[i] <= arr1[j])
                              {
                                arr1[j+1] = arr1[j];
                              }
                              else{
                                   arr1[j+1] = arr2[i];
                                   arr2[i] = last;
                                   break;
                               }
                           }
                       }


                       for(int i=0;i<n1;i++)
                       {
                           cout<<arr1[i]<<",";
                       }

                       for(int i=0;i<n2;i++)
                       {
                           cout<<arr2[i]<<",";
                       }
                    }

                    int main()
                    {
                        int arr1[] = {1,6,8,39,44,70};
                        int arr2[] = {4,5,20,23,30};

                        int n1 = sizeof(arr1)/sizeof(arr1[0]);
                        int n2 = sizeof(arr2)/sizeof(arr2[0]);

                        merge_arr(arr1,arr2,n1,n2);

                        cout<<endl;
                        cout<<"Time Complexity : N(square)"<<endl;


                        return 0;
                    }
