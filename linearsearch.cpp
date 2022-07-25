#include<iostream>
using namespace std;

int linearSearch(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter length of array ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter number you want to search ";
    cin>>key;

    cout<<linearSearch(arr,key,n)<<endl;
    cout<<"Time Complexity: O(n)"<<endl;
}