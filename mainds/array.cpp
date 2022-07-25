#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER LENGTH OF ARRAY";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of array";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter"<<i<<" th"<<"Element";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}