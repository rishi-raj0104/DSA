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
void InsertAtTail(node* &head,int d) //head by ref
{
    node* n=new node(d);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void DeleteAtHead(node* &head)
{
    node* temp=head;
    head=temp->next;
    delete temp;
    //free(temp);
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
    node* head= NULL;
    InsertAtTail(head,100);
    InsertAtTail(head,101);
    InsertAtTail(head,102);
    InsertAtTail(head,103);
    InsertAtTail(head,104);
    DeleteAtHead(head);
    display(head);
    
}

