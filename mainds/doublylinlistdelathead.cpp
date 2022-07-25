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
    temp->prev=head;
    head=temp;
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
void InsertAtTail(node* &head,int d)
{
    if(head==NULL)
    {
        node* temp=new node(d);
        temp->next=head;
        if(head!=NULL){
            head->prev=temp;
        }
        head=temp;
        return;
    }
    node* temp= head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* nodeToIns =new node(d);
    temp->next=nodeToIns;
    nodeToIns->prev=temp;
}
void DeleteAtHead(node* &head)
{
    node*temp=head;
    head=temp->next;
    head->prev=NULL;
    delete temp;
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
    DeleteAtHead(head);
    display(head);
    cout<<endl;
    InsertAtTail(head,100);
    display(head);
    return 0;
}