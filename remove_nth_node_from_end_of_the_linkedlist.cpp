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

                   void remove_node(Node** head,int key,int l)
                   {
                     //  int del = l - key;

                       Node* node = *head;
                       Node* temp = NULL;

                       if(node!=NULL && node->data==key)
                       {
                           *head = node->next;
                            free(node);
                            return;
                       }

                       while(node!=NULL && node->data!=key)
                       {
                           temp = node;
                           node = node->next;
                       }

                       if(node==NULL){return;}

                       temp->next = node->next;

                       free(node);
                   }

                   int display(Node* head)
                   {
                       int Count = 0;

                       while(head!=NULL)
                       {
                           Count++;
                           head = head->next;
                       }
                       return Count;
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

                       remove_node(&head,6,Count);
                       display1(head);

                       return 0;
                   }
