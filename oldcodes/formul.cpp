#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int n,i,x;
cout<<"Enter number :";
cin>>n;
cout<<"Enter the max no to multiply this no with :";
cin>>x;
for(i=1;i<=x;i++)
 {cout<<n<<"*"<<i<<"="<<n*i<<endl;
 }
	return 0;
}
