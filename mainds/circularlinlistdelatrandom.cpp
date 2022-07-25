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
void InsertionAtHead(node* &head, int val){
    node* n=new node(val);
 
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void InsertionAtTail(node* &head,int val)
{
    node* n=new node(val);
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
void DeleteAtPos(node* &head,int pos)
{
    node* temp=head;
    if(pos==1)
    {
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
    int count=1;
    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
}
void display(node* head){
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
    node* head =NULL;
    InsertionAtHead(head,10);
    InsertionAtHead(head,20);
    InsertionAtHead(head,30);
    InsertionAtHead(head,40);
    display(head);
    InsertionAtTail(head,50);
    InsertionAtTail(head,60);
    InsertionAtTail(head,70);
    display(head);
    InsertAtPosition(head,2,100);
    display(head);
    DeleteAtPos(head,3);
    display(head);
}