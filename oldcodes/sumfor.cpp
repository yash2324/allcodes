#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int i,n,x=0;
cout<<"Enter natural number :";
cin>>n;
for(i=1;i<=n;i++)
 {
  x=x+i;
  cout<<x<<endl;
 }
	return 0;
}
