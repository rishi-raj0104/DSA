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
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(node* &head,int d)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* nodetoins=new node(d);
    temp->next=nodetoins;
    nodetoins->next=NULL;
}
void InsertAtPos(node* &head,int pos,int d)
{
    node* nodetoins=new node(d);
    node* temp=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    nodetoins->next =temp->next;
    temp->next =nodetoins;
}
node* reverse(node* &head)
{
    node* currptr=head;
    node* prevptr=NULL;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
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
    InsertAtTail(head,60);
    InsertAtPos(head,3,100);
    display(head);
    cout<<endl;
    node* newhead=reverse(head);
    display(newhead);
    return 0;
}