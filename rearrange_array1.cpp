#include<bits/stdc++.h>
#include<string.h>
using namespace std;

                   int marge(int n[],int r,int m,int l,int temp[])
                   {
                       int i = l;
                       int j = m;
                       int k = l;

                       while(i<=m-1 && j<=r)
                       {
                           if(n[i] <= n[j])
                           {
                               temp[k++] = n[i++];
                           }
                           else{
                               temp[k++] = n[j++];
                           }
                       }

                       while(i<=m-1)
                       {
                           temp[k++] = n[i++];
                       }
                        while(j<=r)
                       {
                           temp[k++] = n[j++];
                       }

                       for(i = l;i<=r;i++)
                       {
                           n[i] = temp[i];
                       }

                   }


                   void smallestnum(int n[],int l,int r,int temp[])
                   {
                     if( l<r)
                     {
                         int m = (l+r)/2;
                         smallestnum(n,l,m,temp);
                         smallestnum(n,m+1,r,temp);

                         marge(n,r,m+1,l,temp);
                     }
                   }

                   void find_small_num(int arr[],int s)
                   {
                       for(int i=0;i<s;i++)
                       {
                           if(arr[i]>0)
                           {
                               swap(arr[i],arr[0]);
                               break;
                           }
                       }
                   }

                   int main()
                   {
                       int n[] = {2,4,6,0,0,3};

                       int s = sizeof(n)/sizeof(n[0]);
                       int temp[s];

                       smallestnum(n,0,s,temp);

                       find_small_num(n,s);

                       for(int i=0;i<s;i++)
                       {
                          cout<<n[i]<<",";
                       }


                       return 0;
                   }
