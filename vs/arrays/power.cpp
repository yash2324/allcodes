#include <iostream>
using namespace std;
int c=1;
int pow(int a,int b)
{for(int i=0;i<b;i++)
 {c=a*c;
  }
  return c;}


int main()
{
    cout<<pow(2,5);
 return 0;
}

