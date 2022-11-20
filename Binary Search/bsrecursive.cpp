#include<bits/stdc++.h>
using namespace std;

//Time complexity O(logN)

int BinarySearch(int A[], int low, int high, int x)
{
    if(low>high)
    {
        return -1;
    }
    int mid = (low+high)/2; //low+(high-low)/2;
    if(x==A[mid])
    {
        return mid;
    }
    else if(x<A[mid])
    {
        return BinarySearch(A,low,mid-1,x);
    }
    else
    {
        return BinarySearch(A,mid+1,high,x);
    }
}
int main()
{
    int A[]= {1,2,3,5,6,7,8,9};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Enter a number: ";
    int x;
    cin>>x;
    int low = 0, high = n-1;
    int index = BinarySearch(A,low,high,x);
    if(index!=-1)
    {
        cout<<"Number "<<x<<" at index "<<index<<endl;
    }
    else
    {
        cout<<"Not found!"<<endl;
    }
    return 0;
}
