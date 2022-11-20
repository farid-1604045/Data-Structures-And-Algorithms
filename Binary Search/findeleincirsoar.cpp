//Find element in a circularly sorted array
//Time complexity - O(logN)

#include<bits/stdc++.h>
using namespace std;

int CircularArraySearch(int A[], int n, int x)
{
    int low = 0, high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;

        if(x==A[mid])
        {
            return mid;//Case:1 found x
        }
        if(A[mid]<=A[high])
        {
            if(x>A[mid]&&x<=A[high])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        else
        {
            if(x>=A[low]&&x<A[mid])
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
    }
    return -1;2
}
int main()
{
    int A[]={12,14,18,21,3,6,8,9};
    int n = sizeof(A)/sizeof(A[0]);
    int x;
    cout<<"Search Element: ";
    cin>>x;
    int index = CircularArraySearch(A,n,x);
    cout<<index<<endl;
    return 0;
}
