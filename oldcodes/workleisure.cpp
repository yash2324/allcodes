#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	using namespace std;
	int age;
	cout<<"Enter age :";
	cin>>age;	
	if(age>12 && age<50)
	   cout<<"Young";
	else
	   cout<<"Old";
	return 0;
}
