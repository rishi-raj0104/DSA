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

void InsertAtHead(node* &head,int d)
{
    node* n=new node(d);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void DeleteAtHead(node* &head)
{
    node* temp=head;
    if(head==NULL)
    {
        cout<<"Underflow"<<endl;
    }
    else if(head->next==head)
    {
        head=NULL;
        free(head);
        cout<<"Node Deleted"<<endl;
    }
    else
    {
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        node* p;
        p=head;
        head=head->next;
        temp->next=head;
        free(p);


    }
}
void display(node* head)
{
    node* temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    } while (temp!=head);
    cout<<endl;
}
int main()
{
    node* head=NULL;
    InsertAtHead(head,10);
    InsertAtHead(head,20);
    InsertAtHead(head,30);
    display(head);
    DeleteAtHead(head);
    display(head);
}