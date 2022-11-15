#include<bits/stdc++.h>
using namespace std;

// In bubble sort biggest value going to last element
// In insertion sort just reverse the logic, lowest element
// comes to first
// Time complexity - O(N^2)
// Best case - O(N) if array is already sorted
// Worst case - O(N^2) if array is reversely sorted

void solve(int A[], int n)
{
    for(int i=1; i<n; i++)
    {
        int value = A[i];
        int hole = i;
        while(hole>0 && A[hole-1]>value)
        {
            A[hole]=A[hole-1];
            hole=hole-1;
        }
        A[hole]=value;
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
