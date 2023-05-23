#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
float m1,m2,m3,avg,sum;
cout<<"Enter your marks in all 3 sub :";
cin>>m1>>m2>>m3;
sum=m1+m2+m3;
avg=sum/3;
if(avg>=60)
{cout<<"Grade A";
}
else
{if(avg>=35 && avg<60)
  {cout<<"Grade B";
  }
 else
  {cout<<"Grade C";
  }
}

	return 0;
}
