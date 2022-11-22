//Function Pointers

#include<bits/stdc++.h>
using namespace std;

void PrintHello(char* name)
{
    printf("Hello %s\n",name);
}
int Add(int a, int b)
{
    return a+b;
}

int main()
{
    int c;
    //pointer to function that should take
    //(int,int) as argument/parameter and return int
    int (*p)(int,int);
    p = &Add;
    c = (*p)(2,3); //de-referencing and executing the function
    printf("%d\n",c);
    void (*ptr)(char*);
    ptr = &PrintHello;
    ptr("Tom");
}
