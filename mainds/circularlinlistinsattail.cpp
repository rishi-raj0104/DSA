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
    InsertionAtTail(head,10);
    InsertionAtTail(head,20);
    InsertionAtTail(head,30);
    display(head);
    return 0;
}