//Number of array rotation
//Using Binary search approach
//Time complexity - O(logN)
#include<bits/stdc++.h>
using namespace std;

int FindRotationCount(int A[], int n)
{
    int low=0, high = n-1;
    while(low<=high)
    {
        if(A[low]<=A[high])
        {
            return low; //Case 1;
        }
        int mid = (low+high)/2;
        int next = (mid+1)%n, prev = (mid+n-1)%n;
        if(A[mid]<=A[next] && A[mid]<=A[prev])
        {
            return mid; //Case 2;
        }
        else if(A[mid]<=A[high])
        {
            high = mid-1; //Case 3;
        }
        else if(A[mid]>=A[low])
        {
            low = mid+1; //Case 4;
        }
    }
    return -1;
}
int main()
{
    int A[]={13,14,2,3,5,8,11,12};
    int n = sizeof(A)/sizeof(A[0]);
    //next = (mid+1)%N
    //prev = (mid+N-1)%N

    //Case 1: A[low]<=A[high] return low {if array is already sorted}
    //Case 2: A[mid]<=A[next] && A[mid]<=A[prev] return mid {pivot}
    //Case 3: A[mid]<=A[high] high = mid-1;
    //Case 4: A[mid]>=A[low] low = mid+1;

    cout<<FindRotationCount(A,n)<<endl;
    return 0;

}
