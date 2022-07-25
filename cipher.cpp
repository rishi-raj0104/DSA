#include<iostream>
#include<cstring>
using namespace std;
void cipher(char str[50])
{
    for (int i=0;i<strlen(str);i++)
    {
        str[i]=char(int(str[i])+2);
    }
    cout<<str;
}
int main()
{
    char str[50];
    cout<<"Enter a string ";
    cin>>str;
    cipher(str);
    return 0;
}
