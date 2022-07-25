#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void InsertAthead(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(node* &head,int d)
{
    node* n=new node(d);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void DeleteAtTail(node* &head)
{
    node* temp=head;
    node* temp1;
    while(temp->next!=NULL)
    {
        temp1 =temp;
        temp=temp->next;
    }
    temp1->next=temp->next;
    free(temp);
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
    InsertAthead(head,10);
    InsertAthead(head,20);
    InsertAtTail(head,30);
    InsertAtTail(head,40);
    DeleteAtTail(head);
    display(head);
}
