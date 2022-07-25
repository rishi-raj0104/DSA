#include<iostream>
using namespace std;

int square(int x)
{
    int y =x*x;
    cout<<"Area of square is "<<y<<endl;
    return 0;
}
int circle(int radius)
{
    int areac;
    areac = 3.14 * radius * radius;
    cout << "Area of circle with radius "<<areac<<endl;
    return 0;
}
int rectangle(int length,int breadth)
{
    int arear;
    arear=length*breadth;
    cout<<"Area of rectangle is "<<arear<<endl;
    return 0;
}
int main()
{
    int a,radius,length,breadth;
    //square circle and rectangle
    cout<<"enter side of square"<<endl;
    cin>>a;
    square(a);
    cout << "Enter the radius of circle : ";
    cin >> radius;
    circle(radius);
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the breadth: ";
    cin >> breadth;
    rectangle(length,breadth);

}