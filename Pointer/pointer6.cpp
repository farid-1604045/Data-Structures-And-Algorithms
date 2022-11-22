//Arrays as function arguments
#include<bits/stdc++.h>
using namespace std;

int SumOfElements(int A[])
{
    int i, sum = 0;
    int total = sizeof(A)/sizeof(A[0]);
    printf("SOE - Size of A = %d, size of A[0] = %d\n", sizeof(A),sizeof(A[0]));
    for(int i=0; i<total; i++)
    {
        sum+=A[i];
    }
    return sum;
}
int main()
{
    int A[]={1,2,3,4,5};
    int total = SumOfElements(A);
    printf("Sum of elements = %d\n",total);
    printf("Main size of A = %d, Size of A[0] = %d\n",sizeof(A),sizeof(A[0]));
}
