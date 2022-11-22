//Pointers as function returns
#include<bits/stdc++.h>
using namespace std;

void PrintHelloWorld()
{
    printf("Hello World\n");
}
int *Add(int* x, int* y)
{
    int *c = (int*)malloc(sizeof(int));
    *c = *x + *y;
    return c;
}
int main()
{
    int x = 2, y = 4;
    //int z = Add(x,y);
    int *ptr = Add(&x,&y);
    PrintHelloWorld();
    printf("Sum = %d\n",*ptr);
}
