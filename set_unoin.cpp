#include<bits/stdc++.h>
using namespace std;

                  int edge_count;
                  set<int>MST;

                   class Node{
                       public:
                       int parent;
                       int wt;

                   };
                   vector<Node> v;

                   void connect_node(int x,int y)
                   {
                       v[x].parent = y;
                   }

                   void mst(int x)
                   {
                       if(v[x].parent==-1)
                       {
                           return ;
                       }

                       mst(v[x].parent);
                       cout<<v[x].parent<<","<<v[x].wt<<endl;

                   }

                   int detect(int x)
                   {
                       if(v[x].parent==-1)
                       {
                           //cout<<x;
                           return x;
                       }

                       return detect(v[x].parent);
                   }

                   int get_root(int x,int y)
                   {


                       int root1 = detect(x);
                       int root2 = detect(y);
                     //  cout<<root1<<root2<<endl;

                       if(root1!=root2)
                       {
                          connect_node(root1,root2);
                          MST.insert(root1);
                          edge_count++;

                       }
                       else{
                          cout<<"this connection will create cycle :"<<root1<<","<<root2<<endl;
                       }
                       return edge_count;
                   }

                   int main()
                   {

                       v.resize(6);
                       for(int i=0;i<6;i++)
                       {
                           v[i].parent = -1;
                           v[i].wt = i;
                       }

                       get_root(0,1);
                       get_root(1,2);
                       get_root(1,0);
                       get_root(2,3);
                       get_root(2,0);
                       get_root(3,4);
                       get_root(3,1);
                       get_root(4,5);
                       get_root(4,1);
                       get_root(5,5);

                       cout<<get_root(5,0)<<endl;
                      // for(auto x:MST)
                     //  {
                       //    cout<<x<<",";
                      // }

                       cout<<"MST :"<<endl;
                       mst(0);

                       return 0;
                   }
