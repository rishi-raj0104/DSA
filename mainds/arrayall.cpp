#include<iostream>
using namespace std;

int main()
{
    int arr[20]={1,2,3,4,5,6,7,8};
    int n=8;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pos=3;
    for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"Array after deletion"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array insertion"<<endl;
    int x=100;
    for(int i=n-1;i>pos;i--)
    {
        arr[i]=arr[i-1];
        arr[pos-1]=x;
    }
    cout<<"Array after insertion"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array Updation "<<endl;
    arr[1]=1000;
    cout<<"Array Printing"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
    
}