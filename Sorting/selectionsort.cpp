#include<bits/stdc++.h>
using namespace std;


//Inplace Sorting Algorithm (That means it doesn't take extra memory/space)
//Time Complexity - O(N^2)

void solve(int A[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int iMin = i;
        for(int j=i+1; j<n; j++)
        {
            if(A[j]<A[iMin])
            {
                iMin=j;
            }
        }
        int temp=A[i];
        A[i]=A[iMin];
        A[iMin]=temp;
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
