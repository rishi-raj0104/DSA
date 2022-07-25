#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }    
};
void InsertAtHead(node* &head,int data)
{
    node* temp=new node(data);
    temp->next=head;
    head=temp;
}
void InsertAtTail(node* &head,int data)
{
    node* n=new node(data);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void InsertAtRandom(node* &head,int data,int position)
{
    node*temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    node* nodeToInsert =new node(data);
    nodeToInsert ->next =temp->next;
    temp->next =nodeToInsert;

}
void deleteAtTail(node* &head)
{
    node* temp=head;
    node* temp1;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=temp->next;
    delete temp;
}
void deleteAtRandom(node* &head,int val)
{
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main()
{
    node* head=NULL;
    InsertAtHead(head,10);
    InsertAtHead(head,20);
    InsertAtHead(head,30);
    InsertAtTail(head,40);
    InsertAtTail(head,50);
    InsertAtRandom(head,100,2);
    deleteAtTail(head);
    deleteAtRandom(head,20);
    display(head);
    return 0;
}