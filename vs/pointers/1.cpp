#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x=10;
    int *p;
    p=&x;
    cout<<x<<endl<<*p<<endl<<p<<endl<<&p<<endl<<&x;
    return 0;
}
