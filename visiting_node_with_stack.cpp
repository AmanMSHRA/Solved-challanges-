#include<bits/stdc++.h>
using namespace std;
                    void insert_ver_edge(list<int>adj[],int v,int u)
                    {
                        adj[v].push_back(u);
                    }

                    void get_Node(stack<int>s,list<int>adj[],int v,bool visited[])
                    {
                        cout<<v<<",";
                        visited[v] = true;

                        for(auto i=adj[v].begin();i!=adj[v].end(); i++)
                        {
                            if(visited[*i]!=true)
                            {
                               get_Node(s,adj,*i,visited);
                            }
                        }

                       cout<<v<<",";
                    }

                    int main()
                    {
                        int n =6;
                       list<int> adj[n];
                       bool visited[1000] = {0};

                       insert_ver_edge(adj,5,2);
                       insert_ver_edge(adj,5,0);
                       insert_ver_edge(adj,4,0);
                       insert_ver_edge(adj,4,1);
                       insert_ver_edge(adj,2,3);
                       insert_ver_edge(adj,3,1);

                       stack<int> s;
                       for(int i=0;i<n;i++)
                       {
                           if(visited[i]==false){
                            get_Node(s,adj,i,visited);
                           }
                       }
                       while(!s.empty())
                        {
                            cout<<s.top()<<",";
                            s.pop();
                        }


                       return 0;
                    }
