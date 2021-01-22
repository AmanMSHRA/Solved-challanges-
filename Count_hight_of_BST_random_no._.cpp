#include<bits/stdc++.h>
using namespace std;

                     class tree{
                     public:

                        int data;
                        tree* left;
                        tree* right;

                        tree(int data)
                        {
                            this->data = data;
                            left = right = NULL;
                        }
                     };


                     int level_order(tree* root,int L,int R)
                     {

                         if(root==NULL)
                         {
                             return 0;
                         }

                          L = level_order(root->left,L,R);
                          R = level_order(root->right,L,R);

                          if(L > R)
                          {
                              return L+1;
                          }
                          else{
                            return R+1;
                          }

                     }

                     int main()
                     {
                        tree* root = new tree(11);
                        root->left = new tree(5);
                        root->right = new tree(15);
                        root->left->left = new tree(1);
                        root->left->right = new tree(7);
                        root->right->left = new tree(12);
                        root->right->right = new tree(18);
                        root->right->right->right = new tree(19);
                        root->right->right->right->right = new tree(20);



                        int Depth;
                        Depth = level_order(root,0,0);
                        cout<<Depth<<endl;
                        return 0;
                     }
