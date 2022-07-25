#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=10;
    int *p;
    p=&a;

    cout<<*p<<endl;
    int **q=&p;

    cout<<*q<<endl;
    cout<<**q<<endl;

    int x=10;
    int y=20;

    swap(&x,&y);
    cout<<x<<" "<<y<<endl;

    return 0;
}