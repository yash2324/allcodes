#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
cout<<"Enter year";
int year;
cin>>year;
if(year%100==0)
{if(year%400==0)
    cout<<"leap yr";
 else
    cout<<"not leap";
}
else if(year%4==0)
cout<<"leap";
else
cout<<"not leap";
	return 0;
}
