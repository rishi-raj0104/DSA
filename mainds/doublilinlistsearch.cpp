#include<iostream>
using namespace std;

class node
{
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
void InserAtHead(node* &head,int d)
{
    node* temp=new node(d);                                                                                         
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
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
bool search(node* head,int key)
{
    node* temp = head;
    int ctr=0;
    while(temp!=NULL)
    {
        ctr++;
        if(temp->data==key)
        {
            cout<<"AVAILABE AT POSITION "<<ctr<<endl;
            return true;
        }
        temp=temp->next;
        if(temp->next == NULL && temp->data != key)
        {
            cout<<"element not found";
        }
    }
    return 0;
}
int main()
{
    node* head=NULL;
    InserAtHead(head,10);
    InserAtHead(head,20);
    InserAtHead(head,30);
    display(head);
    cout<<endl;
    cout<<search(head,10);
    return 0;
}