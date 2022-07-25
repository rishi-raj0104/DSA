#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30};

    int *ptr=arr;
    cout<<*ptr<<endl;
    cout<<"ARRAY"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    cout<<"ARRAY IS "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<endl;

    }
    return 0;
}