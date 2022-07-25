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
void InsertAtHead(node* &head,int d)
{
    node*temp=new node(d);
    temp->data=d;
    temp->next=head;
    head=temp;
}
void InsertAtTail(node* &head, int d)
{
    node* n= new node(d);
    node*temp=head;
    if(head==NULL)
    {
        head=n;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void InsertAtRandom(node* &head,int position,int data)
{
    node* temp= head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    node *nodeToInsert = new node(data);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void display(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
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
            cout<<ctr<<endl;
            return true;
        }
        temp=temp->next;
        if(temp->next == NULL&& temp->data != key)
        {
            cout<<"element not found";
        }
    }
    return 0;
}
int main()
{
    node* head=NULL;
    InsertAtHead(head,11);
    InsertAtHead(head,12);
    InsertAtHead(head,13);
    InsertAtTail(head,10);
    InsertAtTail(head,9);
    InsertAtTail(head,8);
    InsertAtRandom(head,3,100);
    display(head);
    cout<<search(head,100);

}