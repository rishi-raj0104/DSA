#include <bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
    {
        cout <<" "<< arr[i];
    }
    cout<<endl;
		
}

int main()
{
	int arr[] = {5, 3, 1, 9, 8, 2, 4, 7};
	int N = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr, N);
	cout <<"Sorted array: "<<endl;
	printArray(arr, N);
	cout<<"O(n^2) ";
	cout<<"BEST CASE O(n^2)";
	return 0;
}