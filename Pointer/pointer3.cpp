//Pointer to pointer
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5;
    int* p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("%d\n",&x);//address of x
    printf("%d\n",p);//address of x
    printf("%d\n",*p);//6
    printf("%d\n",*q); //225 address of x
    printf("%d\n",*(*q)); //6
    printf("%d\n",*(*r)); //address of x
    printf("%d\n",*(*(*r)));//6
    ***r = 10;
    printf("%d\n",x);
    **q = *p + 2;
    printf("%d\n",x);

    return 0;
}
