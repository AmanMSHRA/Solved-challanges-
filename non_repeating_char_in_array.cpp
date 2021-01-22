#include<bits/stdc++.h>
using namespace std;

                  void Get_ele_hash(char arr[],int n)
                  {
                     unordered_map<char,int>m;

                     for(int i=0;i<n;i++)
                     {
                         m[arr[i]]++;
                     }
                     char c;

                     for(auto it:m)
                     {
                        if(it.second ==1)
                        {
                            c = it.first;
                        }
                        else{
                            cout<<"F.N-R character :"<<c<<endl;
                            break;
                        }
                     }
                  }

                  void Get_char(char arr[],int n)
                  {
                      queue<char>q;


                      for(int i=0;i<n;i++)
                      {
                          if(q.empty())
                          {
                              q.push(arr[i]);
                          }
                          else if(arr[i]==q.front())
                          {
                              q.pop();
                          }
                          else{
                            q.push(arr[i]);
                          }
                      }
                      int Count = 1;
                      while(Count!=0)
                      {
                          cout<<"F.N-R character :"<<q.front()<<endl;
                          q.pop();
                          Count--;
                      }
                  }


                  int main()
                  {
                      char arr[] = {'a','b','c','c','a','b','d'};
                      int n = sizeof(arr)/sizeof(arr[0]);

                     Get_char(arr,n);
                     Get_ele_hash(arr,n);


                      return 0;
                  }
