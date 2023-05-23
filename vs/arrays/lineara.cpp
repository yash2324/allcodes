#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int A[7],key;
    cout<<"Enter numbers";
    for(int i=0;i<7;i++)
    {cin>>A[i];}
    cout<<"Enter search";
    cin>>key;
    for(int i=0;i<7;i++)
        {if(key==A[i])
        {cout<<"found at"<<i;
        return 0;}}
    cout<<"Not found";

}
