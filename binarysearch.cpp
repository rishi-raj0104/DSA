#include<iostream>
using namespace std;

int binarySearch(int arr[],int key,int n)
{
    int low=0,high=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])        
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
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

    cout<<BinarySearch(arr,keb,n)<<endl;
    cout<<"Time Complexity: O(log(n))"<<endl;

}