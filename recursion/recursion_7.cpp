#include<bits/stdc++.h>
using namespace std;

//Using two pointer
/*
int main()
{
    int a[6]={1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(a[0]);
    int i=0,j=n-1;
    for(int k=0; k<n/2; k++)
    {
        swap(a[i],a[j]);
        i++,j--;
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}*/

//Using recursion

void Swap(int *a, int i, int j)
{
    if(i>j)
    {
        return;
    }
    swap(a[i],a[j]);
    Swap(a,i+1,j-1);
}
int main()
{
    int a[5]={1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);

    int i=0, j=n-1;
    Swap(a,i,j);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
    return 0;
}
