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

                    void print_node(tree* root,int l)
                    {
                        if(root==NULL)
                        {
                            return;
                        }

                        if(l==1)
                        {
                            cout<<root->data<<",";
                        }
                        else if(l > 0)
                        {
                            print_node(root->left,l-1);
                            print_node(root->right,l-1);
                        }
                    }


                    tree* level_order(tree* root)
                    {
                        int l =0;

                        for(l=0;l<5;l++)
                        {
                            print_node(root,l);
                        }
                    }

                    tree* print(tree* root)
                    {
                       if(root!=NULL)
                       {
                          cout<<root->data<<",";
                          print(root->left);
                          print(root->right);
                       }
                    }

                  int main()
                  {
                     tree* root = new tree(11);
                     root->left = new tree(5);
                     root->right = new tree(15);
                     root->left->left = new tree(1);
                     root->left->right = new tree(7);

                    print(root);
                  level_order(root);

                    return 0;
                  }
