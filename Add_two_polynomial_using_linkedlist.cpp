#include<bits/stdc++.h>
using namespace std;

                   class Node{
                   public:
                      int data;
                      int coff;
                      Node* next;

                   };

                   Node* insertion(Node** head,int data,int coff)
                   {
                       Node* newNode = new Node();

                       newNode->data = data;

                       newNode->coff = coff;

                       newNode->next = (*head);

                       (*head) = newNode;
                   }

                   Node* add_polynomial(Node* head,Node* head1,Node* head2)
                   {
                       int coff = 0;

                       while(head != NULL && head1 != NULL)
                       {
                           int data  = head->data + head1->data;
                           insertion(&head2,data,coff);
                           head = head->next;
                           head1 = head1->next;
                           coff++;

                       }

                       while(head!=NULL)
                       {
                          insertion(&head2,head->data,coff);
                          head = head->next;
                          coff++;
                       }

                       while(head1!=NULL)
                       {
                          insertion(&head2,head1->data,coff);
                          head1 = head1->next;
                          coff++;
                       }

                       while(head2!=NULL)
                       {
                           cout<<head2->data<<"^"<<head2->coff<<",";
                           head2 = head2->next;
                       }
                   }

                   Node* display(Node* head)
                   {
                       while(head!=NULL)
                       {
                           cout<<head->data<<",";
                           cout<<head->coff;
                           cout<<endl;
                           head = head->next;
                       }
                   }

                   int main()
                   {
                       Node* head = NULL;
                       Node* head1 = NULL;
                       Node* head2 = NULL;

                       insertion(&head,2,2);
                       insertion(&head,4,1);
                       insertion(&head,5,0);

                       insertion(&head1,5,1);
                       insertion(&head1,5,0);

                      // display(head);
                       add_polynomial(head,head1,head2);

                     return 0;
                   }
