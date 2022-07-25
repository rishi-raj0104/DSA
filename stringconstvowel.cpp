#include <iostream>
#include <string>
using namespace std;
int main()
{
    char string[100];
    int i,vow=0,cons=0;
        
    cout<<"Enter  the string : ";
    cin>>string;
    
    for(i=0;string[i];i++)
    {
        if(string[i]=='a'|| string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O' ||string[i]=='U')
        {
            vow++;
        }
        else
        {
            cons++;
        }
    }
    cout<<"Total number of vowels in a given string are = "<<vow<<endl;
    cout<<"Constant are "<<cons;
    return 0;
}