#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int A[2][3]={{2,3,4},{5,6,7}};
    for(int i=0;i<2;i++)
    {   for(int j=0;j<3;j++)
            cout<<A[i][j];
        cout<<endl;}
    return 0;
}
