#include<bits/stdc++.h>
using namespace std;

                   void find_missing_no(int arr[],int n)
                   {
                       for(int i=1;i<=n;i++)
                       {
                           if(arr[i] < n && arr[i]!=0)
                           {
                               arr[i] = 0;
                           }
                           else{
                             continue;
                           }
                       }

                       for(int i=1;i<=n;i++)
                       {
                           if(arr[i]>0)
                           {
                               cout<<"first smallest missing no. is :"<<i<<endl;
                               break;
                           }
                       }
                   }

                   int main()
                   {
                       int arr[] = {1,4,2,5,6};
                       int n = sizeof(arr)/sizeof(arr[0]);

                       find_missing_no(arr,n);

                       return 0;
                   }
