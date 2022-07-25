#include<iostream>
#include<string>
using namespace std;

typedef struct student
{
    string name;
    int id;
    int money;

}ep;

int main()
{
    ep rishi;
    rishi.name="rishi";
    rishi.id=1;
    rishi.money=100;

    cout<<"STUDENT NAME IS "<<rishi.name<<endl;
    cout<<"STUDENT ID IS "<<rishi.id<<endl;
    cout<<"STUDENT MONEY IS "<<rishi.money<<endl;

    return 0;
}