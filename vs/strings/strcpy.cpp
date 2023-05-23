#include <iostream>
#include<cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    char a[50]={};
char b[50]={"world"};
strcpy(a,b);
cout<<a;
    return 0;
}

