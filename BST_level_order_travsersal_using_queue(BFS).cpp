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

                  void level_order(tree* root)
                  {
                      queue<tree*>q;
                      q.push(root);

                      while(!q.empty())
                      {
                          tree* temp = q.front();
                          cout<<temp->data<<",";
                          q.pop();

                          if(temp->left!=NULL)
                          {
                              q.push(temp->left);
                          }

                          if(temp->right!=NULL)
                          {
                              q.push(temp->right);
                          }

                      }
                  }

                  int main()
                  {
                      tree* root = new tree(11);
                      root->left = new tree(5);
                      root->right = new tree(15);
                      root->left->left = new tree(1);
                      root->left->right = new tree(7);
                      root->right->right = new tree(18);

                      level_order(root);

                      return 0;
                  }
