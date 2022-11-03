//Print 1 to N using Backtrack
#include<stdio.h>

void Print(int i, int n)
{
    if(i<1)
    {
        return;
    }
    Print(i-1,n);
    printf("%d ",i);
}
int main()
{
    Print(10,10);
    return 0;
}
