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
    node* n=new node(data);
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
void InsertAtTail(node* &head,int d)
{
    node* n=new node(d);
    if(head==NULL){
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
}
void InsertAtPosition(node* &head,int pos,int d)
{
    node*temp=head;
    int cnt=1;
    while(cnt<pos-1)
    {
        temp=temp->next;
        cnt++;
    }
    node* nodeToInsert =new node(d);
    nodeToInsert ->next =temp->next;
    temp->next =nodeToInsert;

}
void display(node* head)
{
    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
int main()
{
    node* head=NULL;
    InsertAtHead(head,10);
    InsertAtHead(head,20);
    InsertAtHead(head,30);
    InsertAtHead(head,40);
    display(head);
    InsertAtTail(head,100);
    InsertAtTail(head,200);
    display(head);
    InsertAtPosition(head,2,88);
    display(head);

    return 0;
}