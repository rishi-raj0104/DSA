#include <iostream>  
using namespace std;  
int main()  
{  
    int a[4][4],b[4][4],sum[4][4],m,n,i,j;    
    cout<<"enter the number of row=";    
    cin>>m;    
    cout<<"enter the number of column=";    
    cin>>n;    
    cout<<"enter the first matrix element=\n";    
    for(i=0;i<m;i++)    
    {    
        for(j=0;j<n;j++)    
        {    
            cin>>a[i][j];  
        }
    }        
    cout<<"enter the second matrix element=\n";
    for(i=0;i<m;i++)    
    {    
        for(j=0;j<n;j++)    
        {    
            cin>>b[i][j];    
        }    
    }    
      
    for(i=0;i<m;i++)    
    {    
        for(j=0;j<n;j++)    
        {    
            cout<<a[i][j]<<" ";    
        }    
        cout<<"\n";    
    }
    cout<<endl;
    for(i=0;i<m;i++)    
    {    
        for(j=0;j<n;j++)    
        {    
            cout<<b[i][j]<<" ";    
        }    
        cout<<"\n";    
    }     
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            sum[i][j] = a[i][j] + b[i][j];
    cout << "Sum of matrices\n";
    for(i=0;i<m;i++)    
    {    
        for(j=0;j<n;j++)    
        {    
            cout<<sum[i][j]<<" ";    
        }    
        cout<<"\n";    
    }  
return 0;  
}