#include<bits/stdc++.h>
using namespace std;

// Divide & Conquer
// Recursive
// Stable
// Not In-place
// TC - O(NlogN)
// SC - O(N)
void marge(int A[], int *L, int left, int *R, int right)
{
    int i=0,j=0,k=0;
    while(i<left && j<right)
    {
        if(L[i]<R[j])
        {
            A[k++]=L[i++];
        }
        else
        {
            A[k++]=R[j++];
        }
    }
    while(i<left)
    {
        A[k++]=L[i++];
    }
    while(j<right)
    {
        A[k++]=R[j++];
    }
}
void solve(int A[], int n)
{
    if(n<2)
    {
        return;
    }
    int mid = n/2;
    int *L,*R;
    L = (int*)malloc(mid*sizeof(int));
    R = (int*)malloc((n-mid)*sizeof(int));

    for(int i=0; i<mid; i++)
    {
        L[i]=A[i];
    }
    for(int i=mid; i<n; i++)
    {
        R[i-mid]=A[i];
    }
    solve(L,mid);
    solve(R,n-mid);
    marge(A,L,mid,R,n-mid);
    free(L);
    free(R);
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
