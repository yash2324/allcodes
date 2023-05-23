#include <iostream>
using namespace std;
int n=10,z;
int search(int a[10],int b)
{int i=0;

for(i=0;i<n;i++)
{   
    if(b==a[i])
    {return i;}
}return 0;
}
int main(int argc, char const *argv[])
{int x[10];
    for(int i=0;i<n;i++)
    {   
        cout<<"Enter the value of arrays";
        cin>>x[i];
    }
cout<<"Enter the value to searched";
cin>>z;
int p=search(x,z);
cout<<p;    
return 0;
}
