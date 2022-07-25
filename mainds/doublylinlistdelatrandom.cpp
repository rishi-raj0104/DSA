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
void InsertAtHead(node* &head,int data)
{
    node* n=new node(data);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
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
    node* n=new node(d);
    n->next=temp->next;
    temp->prev=n;
    n->prev=temp;
    temp->next=n;
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
    free(temp);
}
void deleteAtRandom(node* &head,int pos)
{
    if(pos==1)
    {
        node*temp=head;
        head=temp->next;
        head->prev=NULL;
        delete temp;
        return;
    }
    node* temp=head;
    int count=1;
    while(temp!=NULL &&count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;

    if(temp->next!=NULL)
    {
        temp->next->prev=temp->next;
    }
    delete temp;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    InsertAtHead(head,10);
    InsertAtHead(head,20);
    InsertAtHead(head,30);
    InsertAtHead(head,40);
    display(head);
    InsertAtRandom(head,100,2);
    display(head);
    deleteAtRandom(head,2);
    display(head);
    cout<<search(head,100);
    return 0;
}