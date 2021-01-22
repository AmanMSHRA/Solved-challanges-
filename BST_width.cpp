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

                     int Get_width(tree* root,int i)
                     {
                        if(root==NULL)
                        {
                            return 0;
                        }

                        if(i==1)
                        {
                            return 1;
                        }
                        else if(i>1){
                         return (Get_width(root->left,i-1) + Get_width(root->right,i-1));
                        }
                     }

                     int level_order(tree* root)
                     {
                        int width = 0;
                        int Count = INT_MIN;
                        for(int i=1;i<=5;i++)
                        {
                            width = Get_width(root,i);
                            //cout<<width<<endl;

                            if(width > Count)
                            {
                               Count = width;
                            }
                        }
                        cout<<Count;
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

                        level_order(root);

                        return 0;
                     }
