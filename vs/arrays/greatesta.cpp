#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int greatest;
    int A[7]={4,9,6,10,120,89,12};
    greatest=A[0];
    for(int i=0;i<7;i++)
    {
     if(A[i]>greatest)
     greatest=A[i];}
    cout<<greatest;
    return 0;
}
