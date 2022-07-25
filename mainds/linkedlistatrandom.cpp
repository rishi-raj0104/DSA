#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void InsertAtHead(node* &head,int d)
{
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(node* &head,int d)
{
    node* n= new node(d);
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
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
void InsertAtPosition(node* &head,int position,int d)
{
    node*temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    node* nodeToInsert =new node(d);
    nodeToInsert ->next =temp->next;
    temp->next =nodeToInsert;
}
int main()
{
    node* head= NULL;
    //node* node1 =new node(10);
    //node* head= node1;
    InsertAtHead(head,101);
    InsertAtHead(head,102);
    InsertAtTail(head,100);
    InsertAtPosition(head,2,400);
    display(head);
}

