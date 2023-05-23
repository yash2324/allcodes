#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,i,x=0;
	cout<<"Enter number to check :";
	cin>>n;
	for(i=1;i<n;i++)
	 { if(n%i==0)
	    {x++;
		}
	   
	 }
	if(x>2) 
	{cout<<"Not prime";
	}
	else 
	{cout<<"Prime";
	}
	return 0;
}
