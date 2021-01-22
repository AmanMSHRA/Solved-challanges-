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

                    void display(Node* head)
                    {
                        while(head!=NULL)
                        {
                            cout<<head->data<<",";
                            head = head->next;
                        }

                    }

                    void display1(Node* head,Node* head1)
                    {
                        while(head1!=NULL)
                        {
                            cout<<head1->data<<",";
                            head1 = head1->next;
                        }

                        while(head!=NULL)
                        {
                            cout<<head->data<<",";
                            head = head->next;
                        }

                    }


                    void merge_list(Node* head,Node* head1)
                    {
                       Node* head2 = NULL;

                       while(head!=NULL && head1!=NULL)
                       {
                           if(head->data < head1->data)
                           {
                               insertion(&head2,head->data);
                               head = head->next;
                           }
                           else{
                               insertion(&head2,head1->data);
                               head1 = head1->next;
                           }
                       }

                       while(head1!=NULL)
                       {
                          insertion(&head2,head1->data);
                          head1 = head1->next;
                       }
                       while(head!=NULL)
                       {
                          insertion(&head2,head1->data);
                          head = head->next;
                       }
                       display(head2);

                    }

                    void sort_twolink(Node* head,Node* head1)
                    {
                       Node* Node1,*Node2,*temp;

                       if(head->data < head1->data)
                       {
                           Node1 = head;
                           Node2 = head1;
                       }
                       else{
                         Node1 = head1;
                         Node2 = head;
                       }
                       Node* res = Node1;

                       while(Node1!=NULL && Node2!=NULL)
                       {
                           if(Node1->data < Node2->data)
                           {
                               temp = Node1;
                               Node1 = Node1->next;
                           }
                           else{
                              temp->next = Node2;
                              Node2 = Node1;
                              Node1 = temp->next;
                           }
                       }
                       temp->next = Node2;

                       display(res);
                    }


                   int main()
                   {
                       Node* head = NULL;
                       Node* head1 = NULL;


                       insertion(&head,18);
                       insertion(&head,8);
                       insertion(&head,2);
                       insertion(&head,1);

                       insertion(&head1,50);
                       insertion(&head1,33);
                       insertion(&head1,20);
                       insertion(&head1,7);
                       insertion(&head1,4);
                       cout<<"Time complexity O(head(n) + head1(n)) and space O(n)"<<endl;
                       merge_list(head,head1);
                       cout<<endl;
                       cout<<"Time complexity O(head(n) + head1(n)) and space 0(1)"<<endl;
                       sort_twolink(head,head1);

                       return 0;
                   }
