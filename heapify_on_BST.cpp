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

                      void heapify(tree* root)
                      {
                          int temp;
                          if(root->left==NULL || root->right==NULL)
                          {
                              return;
                          }

                          heapify(root->left);

                          heapify(root->right);

                          if(root->left->data < root->data)
                          {
                             temp = root->left->data;
                             root->left->data = root->data;
                             root->data = temp;
                          }
                          if(root->right->data < root->data)
                          {
                             temp = root->right->data;
                             root->right->data = root->data;
                             root->data = temp;
                          }


                         return;
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


                          display(root);
                          cout<<endl;

                          heapify(root);
                          display(root);

                          heapify(root);
                          display(root);
                         return 0;
                      }
