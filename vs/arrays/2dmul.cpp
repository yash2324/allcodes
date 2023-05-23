#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int A[2][3]={{1,2,3},{3,4,5}};
    int B[3][2]={{1,3,4},{7,8,9},{10,11,12}};
    int C[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            {
                C[i][j]=A[i][j]*B[i][j];
            }
    }
    return 0;
}
