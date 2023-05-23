#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int day;
	cout<<"Enter Day Number";
	cin>>day;
	switch(day)
	{ case 1: cout<<"Sunday";
	    break;
	  case 2:cout<<"Monday";
	    break;
	  case 3:cout<<"Tuesday";
	    break;
	  case 4:cout<<"Wednesday";
	    break;
	  case 5:cout<<"Thursday";
	    break;
	  case 6:cout<<"Friday";
	    break;
	  case 7:cout<<"Saturday";
	    break;
	  default:cout<<"Invalid";
	}
	
	return 0;
}
