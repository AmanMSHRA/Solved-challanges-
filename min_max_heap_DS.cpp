#include<bits/stdc++.h>
using namespace std;

                   class btree{

                   public:
                      int data;
                      btree* left;
                      btree* right;
                   };

                   btree* create_node(btree* root,int data)
                   {
                       btree* newNode = new btree();

                       newNode->data = data;

                       newNode->left = newNode->right = NULL;

                       return newNode;
                   }


                   btree* insertion(btree* root,int data)
                   {
                       if(root==NULL)
                       {
                          root = create_node(root,data);
                          return root;
                       }

                      if(root->left==NULL)
                      {
                           root->left =  insertion(root->left,data);
                           return root;
                      }
                      else{
                        root->right = insertion(root->right,data);
                        return root;
                      }
                   }


                   void display(btree* root)
                   {
                       if(root!=NULL)
                       {
                           cout<<root->data<<",";
                           display(root->left);
                           display(root->right);
                       }
                   }
                   btree* min_heap(int arr[],btree* root,int n)
                   {
                       if(n==0)
                       {
                           return NULL;
                       }

                       for(int i=0;i<n;i++)
                       {
                          root = insertion(root,arr[i]);
                       }
                       return root;

                   }


                   int main()
                   {
                       btree* root = NULL;

                       int arr[] = {8,7,6,5,4,3,2,1};
                       int n = sizeof(arr)/sizeof(arr[0]);

                       root = min_heap(arr,root,n);

                       display(root);
                     return 0;
                   }
