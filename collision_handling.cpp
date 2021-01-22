#include<bits/stdc++.h>
using namespace std;

                  int get_hash(int x,int V)
                  {
                    return (x%V);
                  }

                  void add_edge(vector<int> v[],int x,int V)
                  {
                      v[get_hash(x,V)].push_back(x);
                  }

                  void display(vector<int> v[],int V)
                  {
                      for(int i=0;i<V;i++)
                      {
                         cout<<i<<"-->";
                         for(auto x:v[i])
                         {
                             cout<< x<<",";
                         }
                         cout<<endl;
                      }
                  }

                  int main()
                  {
                      int V = 5;
                      vector<int> v[V];

                      add_edge(v,12,V);
                      add_edge(v,23,V);
                      add_edge(v,56,V);
                      add_edge(v,33,V);
                      add_edge(v,2,V);
                      add_edge(v,1,V);
                      add_edge(v,4,V);
                      add_edge(v,45,V);
                      add_edge(v,99,V);

                      display(v,V);

                      return 0;
                  }
