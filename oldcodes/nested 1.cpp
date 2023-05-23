#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	cout<<"Enter 3 nos:";
	cin>>a>>b>>c;	
	if(a>b)
	{if(a>c)
	 {cout<<a<<" is the largest no";
	 }
	 else
	 {cout<<c;
	 }
	}
    else
    {if(b>c)
     {cout<<b;
     
	 }
	else
	{cout<<c;
	}
	}
	return 0;
}
