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

void InsertAtTail(node* &head,int data)
{
    if(head==NULL)
    {
        node* temp=new node(data);
        temp->next=head;
        if(head!=NULL){
            head->prev=temp;
        }
        head=temp;
        return;
    }
    node* n=new node(data);
    node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void display(node* head)
{
    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    node* t=head;
    while(t!=NULL)
    {
        cout<<t->data<<"->";
        t=t->next;
    }
    cout<<"NULL";
}
int main()
{
    node* head=NULL;
    InsertAtTail(head,10);
    InsertAtTail(head,30);
    InsertAtTail(head,20);
    InsertAtTail(head,40);
    display(head);
}