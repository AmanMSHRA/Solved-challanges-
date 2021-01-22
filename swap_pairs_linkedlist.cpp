#include<bits/stdc++.h>
using namespace std;

                    class Node{

                    public:
                        int data;
                        Node* next;
                    };

                    Node* insertion(Node** head,int data)
                    {
                       Node* newNode = new Node();

                       newNode->data = data;

                       newNode->next = (*head);

                       (*head) = newNode;
                    }

                    int display1(Node* head)
                    {

                       while(head!=NULL)
                       {
                           cout<<head->data<<",";
                           head = head->next;
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
                       insertion(&head,6);

                       int Count  =  display(head);

                       remove_node(&head,1,3);
                       display1(head);

                       return 0;
                    }
