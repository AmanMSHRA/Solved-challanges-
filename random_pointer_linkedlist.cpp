#include<bits/stdc++.h>
using namespace std;

                  class Node{
                  public:

                    int data;
                    Node* next;
                    Node* rand;

                  };

                  Node* insertion(Node** head,int data)
                  {
                      Node* newNode = new Node();

                      newNode->data = data;

                      newNode->next = (*head);

                      newNode->rand = NULL;

                      (*head) = newNode;
                  }

                  Node* rendom_pointer(Node* head,int key,int key1)
                  {
                      Node* node = head;
                      Node* node1 = head;

                      while(node!=NULL && node->data!=key)
                      {
                          node = node->next;
                      }

                      while(node1!=NULL && node1->data!=key1)
                      {
                          node1 = node1->next;
                      }

                      node->rand = node1;
                  }

                  Node* display(Node* head)
                  {
                      Node* head1 = head;

                      while(head!=NULL)
                      {
                          cout<<head->data<<",";
                          head = head->next;
                      }

                      cout<<endl;
                      while(head1!=NULL)
                      {
                          if(head1->rand!=NULL)
                          {
                              cout<<head1->rand->data<<",";
                              head1 = head1->next;
                          }
                          else{
                            head1 = head1->next;
                          }
                      }
                  }

                  int main()
                  {
                      Node* head = NULL;

                      insertion(&head,1);
                      insertion(&head,2);
                      insertion(&head,3);
                      insertion(&head,4);
                      insertion(&head,5);

                      rendom_pointer(head,2,4);
                      rendom_pointer(head,4,1);
                      rendom_pointer(head,1,5);
                      rendom_pointer(head,5,3);
                      rendom_pointer(head,3,2);


                      display(head);


                      return 0;

                  }
