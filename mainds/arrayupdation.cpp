#include<iostream>
using namespace std;

int main()
{
    char arr[]={'a','b','c','d','e'};
    char item='s';
    int i,pos=3;
    cout<<"Given array elements are"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[pos-1]=item;
    cout<<"Array after updation"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
