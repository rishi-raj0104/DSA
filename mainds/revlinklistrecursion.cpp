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
void InsAthead(node* &head,int d)
{
    node* temp=new node(d);
    temp->next=head;
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
node* reverseRecursive(node* &head)
{
    if(head->next=NULL)
    {
        return head;
    }
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}
int main()
{
    node *head=NULL;
    InsAthead(head,10);
    InsAthead(head,20);
    InsAthead(head,30);
    display(head);
    node* newhead=reverseRecursive(head);
    display(newhead);
    cout<<endl;
    return 0;
}