#include <iostream>
#include<cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
using namespace std;
float v,u,a,s;
cout<<"Enter the final speed,initial speed,enter acc :";
cin>>v>>u>>a;
s=(v*v-u*u)/2*a;
cout<<"dist is :"<<s;
 return 0;
}
