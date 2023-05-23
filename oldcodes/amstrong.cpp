#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,i,sum=0,m;
    n=m;
	cout<<"Enter the number";
	cin>>n;
	while(n>0)
	{i=n%10;
	 n=n/10;
	 sum=sum+(i*i*i);
	 
	}
	if(sum=m)
	{cout<<"Amstrong";
		}	
	else
	cout<<"Not amstrong";
	return 0;
}
