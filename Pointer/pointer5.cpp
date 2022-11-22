//Pointers and arrays
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[5];
    A[0]=2;
    A[1]=4;
    A[2]=5;
    A[3]=8;
    A[4]=1;

    int *p;
//    p = &A[0];
//    printf("%d\n",p);
//    printf("%d\n",*p);
//    printf("%d\n",p+1);
//    printf("%d\n",*(p+1));

    p = A;
    //p++ valid but A++ invalid;
//    printf("%d\n",A);//First address of array
//    printf("%d\n",&A[0]);//First address of array
//    printf("%d\n",A[0]);//First value of array
//    printf("%d\n",*A);//First value of array

    for(int i=0; i<5; i++)
    {
        printf("%d\n",&A[i]);
        printf("%d\n",(A+i));
        printf("%d\n",A[i]);
        printf("%d\n",*(A+i));
    }
}
