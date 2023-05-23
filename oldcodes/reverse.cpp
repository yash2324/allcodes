#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,i,x;
	cout<<"Enter no";
	cin>>n;
	while(n>0)
	{
	i=n%10;
	n=n/10;
	cout<<i;}
	return 0;
}
