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

                    Node* construct_loop(Node* head,int key)
                    {
                       Node* temp;

                       while(head!=NULL && head->data != key)
                       {
                           temp = head;
                           head = head->next;
                       }
                       temp = head;

                       while(head->next!=NULL)
                       {
                           head = head->next;
                       }
                       head->next = temp;
                    }

                    Node* destruct_loop(Node* head)
                    {
                        bool detect[10] = {false};
                        Node* temp;


                        while(head!=NULL && detect[head->data]!=true)
                        {
                            detect[head->data] = true;
                            temp = head;
                            head = head->next;
                        }
                        if(detect[head->data]==true)
                        {
                           temp->next = NULL;
                        }

                    }

                    Node* detect_loop(Node* head)
                    {
                        Node* target;
                        target = head->next;

                        while(head!=NULL && target!=NULL)
                        {
                            if(head->data == target->data)
                            {
                                cout<<"loop is detected"<<endl;
                                break;
                            }
                            else{
                                head=head->next;
                                target = target->next->next;
                            }
                        }
                        if(head==NULL || target==NULL)
                        {
                           cout<<"none of loop is detected"<<endl;
                        }
                    }

                    Node* display(Node* head)
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
                        insertion(&head,7);
                        insertion(&head,8);
                        insertion(&head,9);
                        insertion(&head,10);

                        construct_loop(head,5);
                        detect_loop(head->next);

                        destruct_loop(head);
                        detect_loop(head->next);

                       // display(head);

                        return 0;
                    }
