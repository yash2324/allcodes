#include<iostream>
using namespace std;

int fun(int a)
{if(a>0)
 cout<<a<<endl;
 fun(a-1);}
int main(int argc, char const *argv[])
{
    int x=10;
    fun(x);
    return 0;
}
