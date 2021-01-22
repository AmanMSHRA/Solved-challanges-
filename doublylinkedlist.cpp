#include<bits/stdc++.h>
using namespace std;

                     class Node{
                     public:
                        int data;
                        Node* next;
                        Node* prev;

                     };

                     Node* insertion_rear_end(Node** head,int data)
                     {
                         Node* newNode = new Node();

                         newNode->data = data;

                         newNode->next = (*head);

                         newNode->prev = NULL;

                         if((*head)!=NULL){
                            (*head)->prev = newNode;
                         }

                         (*head) = newNode;

                     }
                      Node* insertion_front_end(Node** head,int data)
                     {
                         Node* node = *head;

                         Node* newNode = new Node();

                         newNode->data = data;

                         newNode->next = NULL;

                         while(node->next!=NULL)
                         {
                             node = node->next;
                         }

                         node->next = newNode;

                         newNode->prev = node;

                     }


                     Node* display_rear_end(Node* head)
                     {

                         while(head!=NULL)
                         {
                             cout<<head->data<<",";
                             head = head->next;
                         }
                           cout<<endl;
                     }

                     Node* display_front_end(Node* head)
                     {
                        Node* node;
                         while(head!=NULL)
                         {
                             node = head;
                             head =  head->next;
                         }

                         while(node!=NULL)
                        {
                             cout<<node->data<<",";
                             node = node->prev;
                        }
                        cout<<endl;
                     }


                     Node* deletion_rear_end(Node** head,int data)
                     {
                         Node* node = (*head),*temp;

                         while(node!=NULL && node->data==data)
                         {
                             node = (*head)->next;
                             node->prev = NULL;
                             free(*head);
                             (*head) = node;
                         }

                         while(node!=NULL && node->data!=data)
                         {
                            temp = node;
                            node = node->next;
                         }

                         temp->next = node->next;
                         node->next->prev = temp;

                         free(node);

                     }
                     void deletion_front_end(Node** head,int data)
                     {
                         Node* node = (*head),*temp;

                         while(node!=NULL && node->data!=data)
                         {
                            temp = node;
                            node = node->next;
                         }
                         delete node;
                         temp->next = NULL;

                     }
                     int main()
                     {
                         Node* head = NULL;

                         insertion_rear_end(&head,1);
                         insertion_rear_end(&head,2);
                         insertion_rear_end(&head,3);
                         insertion_rear_end(&head,4);
                         insertion_rear_end(&head,5);

                         insertion_front_end(&head,7);
                         display_rear_end(head);
                         deletion_front_end(&head,7);
                         display_rear_end(head);

                        //display_front_end(head,node);

                      //   deletion(&head,3);

                         return 0;
                     }
