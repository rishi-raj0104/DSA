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
    deleteAtTail(head);
    display(head);
    return 0;
}