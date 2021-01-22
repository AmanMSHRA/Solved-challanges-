#include<bits/stdc++.h>
using namespace std;
#define N 10000

bool visited[N] = {0};

                    bool detect_cycle(vector<int> graph[],int v)
                    {

                        if(visited[v]==true)
                        {
                            return true;
                        }
                        else{

                          visited[v]=true;
                          vector<int>::iterator i = graph[v].begin();

                          for(auto i = graph[v].begin();i!=graph[v].end();i++)
                          {
                              if(visited[*i]!=true)
                              {
                                 if(detect_cycle(graph,*i)==true)
                                 {
                                     return true;
                                 }
                                 return false;
                              }
                          }
                        }
                    }

                    void edge_Verti(vector<int>graph[],int v,int u)
                    {
                        graph[v-1].push_back(u-1);
                    }

                    int main()
                    {
                        int n = 7;
                        vector<int> graph[n];
                        edge_Verti(graph,0,1);
                        edge_Verti(graph,1,2);
                        edge_Verti(graph,2,3);


                        if(detect_cycle(graph,0)==true)
                        {
                            cout<<"contain cycle"<<endl;
                        }
                        else{
                            cout<<"does not contain cycle"<<endl;
                        }
                      return 0;

                    }
