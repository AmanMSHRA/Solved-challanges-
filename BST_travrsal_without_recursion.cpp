#include<bits/stdc++.h>
using namespace std;

                     class Btree{
                     public:

                        int data;
                        Btree* left;
                        Btree* right;

                        Btree(int data)
                        {
                            this->data = data;
                            left = right = NULL;
                        }
                     };

                     Btree* inorder_traversal_without_recursion(Btree* root)
                     {

                         while(root!=NULL)
                         {
                             if(root->left==NULL)
                             {
                                 cout<<root->data<<",";
                                 root = root->right;
                             }
                             else{

                                Btree* temp = root->left;

                                while(temp->right!=NULL && temp->right!=root)
                                {
                                    temp = temp->right;
                                }

                                if(temp->right==NULL)
                                {
                                    temp->right = root;
                                    root = root->left;
                                }

                                else
                                {
                                    temp->right = NULL;
                                    cout<<root->data<<",";
                                    root = root->right;
                                }
                             }
                         }
                     }

                     int main()
                     {
                         Btree* root = new Btree(11);
                         root->left = new Btree(8);
                         root->right = new Btree(15);
                         root->left->left = new Btree(1);
                         root->left->right = new Btree(5);
                         root->right->left = new Btree(12);

                         inorder_traversal_without_recursion(root);

                       return 0;
                     }
