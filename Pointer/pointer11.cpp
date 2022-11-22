//Function pointers and callback
#include<bits/stdc++.h>
using namespace std;

//void A()
//{
//    printf("Hello");
//}
//void B(void (*ptr)())  //function pointer as argument
//{
//    ptr(); //call-back function that "ptr" points to
//}
//int main()
//{
//    void(*p)() = A;
//    B(p); //output: Hello
//}

int compare(int a, int b)
{
    if(a>b) return -1; //for descending order
    else return 1;
}
void BubbleSort(int *A, int n, int (*compare)(int,int))
{
    int i,j,temp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(compare(A[j],A[j+1])>0) //Compare A[j] with A[j+1] and swap if needed
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int i,A[]={3,2,1,4,6,-5};
    BubbleSort(A,6,compare);
    for(int i=0;i<6; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
