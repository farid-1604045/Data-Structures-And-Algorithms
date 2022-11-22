//Stack and Heap
#include<bits/stdc++.h>
using namespace std;

int main()
{
//    int a; //goes on stack
//    int *p; //= (int*)malloc(sizeof(int));
//    p = new int();
//    delete p;
//    p = new int[20];
//    delete[] p;
//    * p = 10;
//    free(p);
//    p = (int*)malloc(20*sizeof(int));

    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int));//if we use calloc
    //calloc initialize all values as zero
    for(int i=0; i<n; i++)
    {
        A[i]=i+1;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",A[i]);
    }
}
