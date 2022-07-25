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
void InsertAtHead(node* &head,int data)//head by ref
{
    node* temp=new node(data);//creationof new node
    temp->next=head;
    head=temp;
}
void print(node*head)
{
    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head=NULL;
    InsertAtHead(head,1);
    InsertAtHead(head,2);
    InsertAtHead(head,3);
    print(head);
}