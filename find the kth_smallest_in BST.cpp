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

                   tree* find_Kth(tree* root,int& k)
                   {
                       if(root==NULL)
                       {
                          return 0;
                       }

                      tree* l = find_Kth(root->left,k);

                      if(l != 0)
                      {
                          return l;
                      }
                      k = k-1;

                      if(k==0)
                      {
                         return root;
                      }

                      tree* r = find_Kth(root->right,k);

                      return r;
                   }

                   void display(tree* root)
                   {
                       if(root!=NULL)
                       {
                         display(root->left);
                         cout<<root->data<<",";
                         display(root->right);
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

                       int k = 2;
                       display(root);
                       cout<<endl;
                       tree* res = find_Kth(root,k);
                       cout<<res->data<<endl;

                     return 0;
                   }
