#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float b,a,c,d;
	cout<<"Enter coeff of x , xsq , variable";
	cin>>b>>a>>c;
	d=(b*b)-(4*a*c);
	if(d==0)
	{cout<<"roots as equal";
	}
	else
	{if(d>0)
	{cout<<"roots are real but not equal";
	}
	 else
	 {cout<<"roots are imaginary";
	 }
	}
	return 0;
}
