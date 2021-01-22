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

                   tree* create_tree(tree* root,int data)
                   {
                       if(root==NULL)
                       {
                           tree* root = new tree(data);
                           return root;
                       }

                       if( root->data > data)
                       {
                           root->left = create_tree(root->left,data);
                       }
                       else
                       {
                           root->right = create_tree(root->right,data);
                       }
                       return root;
                   }

                   void display(tree* root)
                   {
                       while(root->right->right!=NULL)
                       {
                            cout<<root->data<<endl;
                           root = root->right;
                       }
                       cout<<"S.L.E using BST :"<<root->data<<endl;
                   }

                   void  find_sec_largest_using_BST(int arr[],int n)
                   {
                      tree* root = NULL;
                      for(int i=0;i<n;i++)
                      {
                         root = create_tree(root,arr[i]);
                      }
                      display(root);
                   }

                   void find_sec_largest_iterativly(int arr[],int n)
                   {
                       int Count = INT_MIN;
                       int j = n-1;
                       for(int i=0;i<n;i++)
                       {
                          if(arr[i] > arr[j])
                          {
                              if(Count < arr[j])
                              {
                                  Count = arr[j];
                                  j--;
                              }
                          }
                          else{
                            if(Count < arr[i])
                            {
                                Count = arr[i];
                                i++;
                            }
                          }
                       }

                       cout<<"S.L.E :"<<Count<<endl;
                   }

                   int main()
                   {
                       int arr[] = {13,2,4,11,12};
                       int n = sizeof(arr)/sizeof(arr[0]);


                       find_sec_largest_iterativly(arr,n);
                       find_sec_largest_using_BST(arr,n);

                       return 0;
                   }
