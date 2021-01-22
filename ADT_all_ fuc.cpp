#include<bits/stdc++.h>
#include<vector>
using namespace std;

                    int get_hash(int x,int n)
                    {
                        return x % n;
                    }

                    void insert_linear_probing(vector<int>v1,int x,int n)
                    {

                        v1[get_hash(x,n)].push_back(x);
                    }

                    int main()
                    {
                        vector<int> v = {12,12,32,2,2,3,3,3,21,21,12};
                        int n =8;
                         vector<int> v1[n];

                        for(int i=0;i<n;i++)
                        {
                            v1[i] = NULL;
                        }

                        for(int i=10;i<18;i++)
                        {
                            insert_linear_probing(v1,i,n);
                        }

                        unordered_map<int,int>m = {};

                        for(auto x:v)
                        {
                            if(m.find(x)!=m.end())
                            {
                                m[x]++;
                            }
                            else{
                               m[x] = 0;
                            }
                        }

                        for(auto x:m)
                        {
                          cout<<x.first<<"->"<<x.second+1<<endl;
                        }



                        return 0;
                    }
