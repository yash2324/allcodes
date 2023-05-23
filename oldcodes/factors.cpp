#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int n,i,x;
cout<<"Enter number :";
cin>>n;
for(i=1;i<=n;i++)
{if(n%i==0)
   {
   cout<<i<<endl;}
 else
   continue;
   }	return 0;
}
