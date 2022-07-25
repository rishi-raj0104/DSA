#include<iostream>
using namespace std;

int main()
{
    int arr[20]={10,20,30,40,50,60,70,80};
    int n=8;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x=20;
    int pos=2;
    n++;
    for(int i=n-1;i>pos;i--)//i>pos
    {
        cout<<i<<" ";
        arr[i]=arr[i-1];
        arr[pos-1]=x;
    }
    cout<<endl;
    cout<<"Array after insertion"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}