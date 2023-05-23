#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int count=1;
    for(int i=0;i<5;i++)
    {   count=1;
        for(int j=0;j<=i;j++)
        {cout<<count<<" ";
        count++;}
        cout<<endl;
    }
    return 0;
}
