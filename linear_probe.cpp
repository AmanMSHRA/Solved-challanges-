#include<bits/stdc++.h>
using namespace std;

                   int get_index(int key,int n,int Count)
                   {
                       return ((key + Count) % n);
                   }

                   void insert_ele(int v[],int key,int n)
                   {
                       int Count = 0;
                       int index = get_index(key,n,Count);
                       int data = v[index];

                       while(data > 0 && Count < n)
                       {
                           index = get_index(key,n,Count++);
                           data = v[index];
                       }

                       v[index] = key;
                   }

                   int main()
                   {
                      int n = 10;
                      int v[n] = {0};

                      insert_ele(v,23,n);
                      insert_ele(v,33,n);
                      insert_ele(v,83,n);
                      insert_ele(v,13,n);
                      insert_ele(v,73,n);
                      insert_ele(v,3,n);
                      insert_ele(v,43,n);
                      insert_ele(v,45,n);
                      insert_ele(v,30,n);
                      insert_ele(v,20,n);


                      for(int i=0;i<n;i++)
                      {
                          cout<<v[i]<<endl;
                      }

                      return 0;
                   }
