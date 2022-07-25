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
    cout<<head->data<<endl;
    return 0;
}