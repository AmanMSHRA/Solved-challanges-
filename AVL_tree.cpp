#include<bits/stdc++.h>
using namespace std;

                    class btree{
                    public:

                        int data;
                        btree* left;
                        btree* right;
                        int  height;

                    };

                    int get_height(btree* node)
                    {
                        if(node==NULL)
                        {
                            return 0;
                        }

                        return (node->height);
                    }

                    btree* get_Node(int data)
                    {
                        btree* newNode = new btree();

                        newNode->data = data;

                        newNode->left = NULL;

                        newNode->right = NULL;

                        newNode->height = 1;

                        return (newNode);
                    }

                    btree* right_rotaion(btree* node)
                    {
                        btree* x1 = node->left;
                        btree* x2 = x1->right;

                        x1->right = node;
                        node->left = x2;

                        x1->height = max(get_height(x1->left),get_height(x1->right))+1;

                        node->height = max(get_height(node->left),get_height(node->right))+1;

                       return x1;

                    }

                    btree* left_rotaion(btree* node)
                    {
                        btree* x1 = node->right;
                        btree* x2 = x1->left;

                        x1->left = node;
                        node->right = x2;

                        x1->height = max(get_height(x1->left),get_height(x1->right))+1;

                        node->height = max(get_height(node->left),get_height(node->right))+1;

                       return x1;

                    }

                    int get_balance_factor(btree* node)
                    {
                        if(node==NULL)
                        {
                            return 0;
                        }
                        return  (get_height(node->left) - get_height(node->right));
                    }

                    btree* insert_node(btree* root,int data)
                    {
                        if(root==NULL)
                        {
                           return (get_Node(data));
                        }

                        if(data < root->data)
                        {
                            root->left = insert_node(root->left,data);
                        }
                        else if(data > root->data)
                        {
                            root->right = insert_node(root->right,data);
                        }
                        else{
                            return root;
                        }

                        root->height = 1 + max(get_height(root->left),get_height(root->right));


                        int BF = get_balance_factor(root);

                        //left left condition
                        if(BF > 1 && data < root->left->data)
                        {
                            return right_rotaion(root);
                        }
                        if(BF < -1 && data > root->right->data)
                        {
                            return right_rotaion(root);
                        }
                        if(BF > 1 && data > root->left->data)
                        {
                           root->left = left_rotaion(root->left);
                           return right_rotaion(root);
                        }
                        if(BF < -1 && data < root->right->data)
                        {
                           root->right = right_rotaion(root->right);
                           return left_rotaion(root);
                        }

                        return root;
                    }

                    void display_inorder(btree* root)
                    {
                        if(root!=NULL)
                        {
                            display_inorder(root->left);
                             cout<<root->data<<",";
                            display_inorder(root->right);
                        }
                    }

                    int main()
                    {
                        btree* root = NULL;

                      root =  insert_node(root,11);
                      root =  insert_node(root,5);
                      root =  insert_node(root,15);
                      root =  insert_node(root,1);
                      root =  insert_node(root,7);
                      root =  insert_node(root,0);

                        display_inorder(root);

                        return 0;
                    }
