#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void InsertAtHead(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    head=temp;
}
void InsertAtTail(node* &head,int d)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* n=new node(d);
    temp->next=n;
    n->prev=temp;
}
void InsertAtRandom(node* &head,int d,int position)
{
    if(position==1)
    {
        InsertAtHead(head,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    node* maitri=new node(d);
    maitri->next=temp->next;
    temp->prev=maitri;
    temp->next=maitri;
    maitri->prev=temp;

    
}
void display(node* head)
{
    node* t=head;
    while(t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    InsertAtHead(head,10);
    InsertAtHead(head,20);
    InsertAtHead(head,30);
    display(head);
    InsertAtTail(head,40);
    InsertAtTail(head,50);
    InsertAtTail(head,60);
    display(head);
    InsertAtRandom(head,111,1);
    display(head);

    return 0;
}