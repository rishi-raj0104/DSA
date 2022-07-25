#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void InsertAtTail(node* &head,int d)
{
    node* n =new node(d);
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
}
void DeleteAtTail(node* &head)
{
    node* temp= head;
    node* temp1;
    while(temp->next!=head)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=head;
    free(temp);


}
void display(node* head)
{
    node* dis = head;
    do{
        cout<<dis->data<<"->";
        dis=dis->next;
    }while(dis!=head);
    cout<<endl;
}
int main()
{
    node* head = NULL;
    InsertAtTail(head,10);
    InsertAtTail(head,20);
    InsertAtTail(head,30);
    display(head);
    DeleteAtTail(head);
    display(head);
}