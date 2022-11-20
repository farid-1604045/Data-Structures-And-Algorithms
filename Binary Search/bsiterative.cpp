#include<bits/stdc++.h>
using namespace std;

//Time complexity - O(logN)
int BinarySearch(int A[], int n, int x)
{
    int low = 0, high = n-1;

    while(low<=high)
    {
        int mid = (low+high)/2; //low+(high-low)/2;
        if(x==A[mid])
        {
            return mid;
        }
        else if(x<A[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
}
int main()
{
    int A[]={1,2,3,5,6,7,8,9};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<"Enter a number: ";
    int x;
    cin>>x;
    int index = BinarySearch(A,n,x);
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
