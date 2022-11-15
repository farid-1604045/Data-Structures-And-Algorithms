#include<bits/stdc++.h>
using namespace std;

//Inplace sorting algorithm
//Time Complexity - O(N^2)
//Best case - O(N) if array is already sorted
//Average case - O(N^2)

void solve(int A[], int n)
{
    bool ok = false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(A[j]>A[j+1])
            {
                int temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                ok = true;
            }
        }
        if(ok==false)
        {
            break;
        }
    }
}
int main()
{
    int A[]={3,7,1,0,4,2,9,8};
    int n = sizeof(A)/sizeof(A[0]);

    solve(A,n);
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
