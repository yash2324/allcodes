#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int l=0,h=6,mid,key;
    int A[7]={1,2,3,4,5,6,7};
    cout<<"Enter number to be searched";
    cin>>key;
    while(l<=h)
    {mid=(l+h)/2;
     if(key==A[mid])
     {cout<<"found at "<<mid;
     return 0;}
     else if(key<A[mid])
     h=mid-1;
     else
     l=mid+1;
     }

    return 0;
}
