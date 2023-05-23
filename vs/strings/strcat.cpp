#include <iostream>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    char a[50]={"Hello "};
char b[50]={"world"};
strcat(a,b);
cout<<a;
    return 0;
}

