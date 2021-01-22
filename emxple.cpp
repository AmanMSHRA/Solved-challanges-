#include<bits/stdc++.h>
using namespace std;


                     class Node{
                     public:

                        int data;
                        Node* left;
                        Node* right;

                        Node(int data)
                        {
                            this->data = data;
                            left = right  = NULL;
                        }
                     };

                     bool isBST(Node* root)
                     {
                         if(root==NULL)
                         {
                            return 1;
                         }
                         if( root->left!=NULL && root->left->data >= root->data)
                         {
                             return 0;
                         }
                         if(root->right!=NULL && root->right->data <= root->data)
                         {
                             return 0;
                         }

                          if((isBST(root->left)!=true) && (isBST(root->right)!=true))
                          {
                              return false;
                          }

                        return true;
                     }

                     void display(Node* root)
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
                         Node* root = new Node(11);
                         root->left = new Node(5);
                         root->right = new Node(15);
                         root->left->left = new Node(1);
                         root->left->right = new Node(7);

                         display(root);
                         cout<<endl;

                        cout<<isBST(root);
                     }
