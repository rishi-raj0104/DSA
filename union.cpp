#include<iostream>
using namespace std;

union money  //for better menory mamagement
{
    int rice;
    char car;
    float pound;

};

int main()
{
    union money m1;//unioin uses only one value at a time for better memory management

    m1.rice=34;//it is overwriting the values 
    m1.car='c';

    cout<<"RICE IS "<<m1.rice<<endl;
    cout<<"CAR IS "<<m1.car<<endl;

    return 0;
}