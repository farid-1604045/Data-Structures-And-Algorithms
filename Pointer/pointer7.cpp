//Character arrays and pointers
#include<bits/stdc++.h>
using namespace std;

void Print(char* C)
{
    int i=0;
    while(C[i]!='\0')
    {
        printf("%c ",C[i]);
        i++;
    }
}
int main()
{
    char C[]="JOHN";
    printf("Size in bytes = %d\n",sizeof(C));
    int len = strlen(C);
    printf("Length = %d\n",len);
    Print(C);
}
