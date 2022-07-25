#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    int remainder=0,reverse=0;
    while (n != 0) 
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    cout<<reverse;
}