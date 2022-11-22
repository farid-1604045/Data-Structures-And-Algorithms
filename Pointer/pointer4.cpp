//Pointers as function arguments - Call by reference
#include<bits/stdc++.h>
using namespace std;

void Swapping(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;
    a = 10;
    b = 20;
    Swapping(&a,&b);
    printf("a = %d and b = %d",a,b);
}
