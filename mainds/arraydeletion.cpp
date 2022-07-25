#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array is "<<size<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pos=3;
    cout<<"Array after deletion"<<endl;
    for(int i=pos;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;




    return 0;
}