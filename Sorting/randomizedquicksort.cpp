#include<bits/stdc++.h>
using namespace std;

//But worst case it take O(NlogN) time
//Inplace sorting Algorithm
//Randomized means in this case partionIndex differ randomly
//Not fixed the end index

int Partition(int A[], int start, int end_)
{
    int pivot = A[end_];
    int PIndex = start;
    for(int i=start; i<end_; i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[PIndex]);
            PIndex++;
        }
    }
    swap(A[PIndex],A[end_]);
    return PIndex;
}
int RandomizedPartition(int A[], int start, int end_)
{
    srand(time(NULL));
    int random = start + rand()%(end_-start);
    swap(A[random],A[end_]);
    return Partition(A,start,end_);
}

void solve(int A[], int start, int end_)
{
    //int start = 0, end_ = n-1;
    if(start>=end_)
    {
        return;
    }
    int PIndex = RandomizedPartition(A,start,end_);
    solve(A,start,PIndex-1);
    solve(A,PIndex+1,end_);
}
int main()
{
    int A[]= {3,7,1,0,4,2,9,8};
    int n = sizeof(A)/sizeof(A[0]);

    solve(A,0,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}

