#include<iostream>
template <class T>
T Max(T x,T y)
{if (x>y)
    return x;
else 
    return y;}
int main(int argc, char const *argv[])
{   using namespace std;
    int z=Max(6,1);
    float a=Max(10.1f,11.7f);
    cout<<z<<endl<<a;
    return 0;
}

