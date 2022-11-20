//Finding first or last occurence of a number
//Find first and last occurence of a number
#include<bits/stdc++.h>
using namespace std;

//Input - 2,4,10,10,10,18,20

int BinarySearch(int A[], int n, int x)
{
    int low = 0, high = n-1;
    int result = -1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;

        if(x==A[mid])
        {
            result = mid;
            high =  mid-1;//Find first element;
            //low = mid+1; //Find last element
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
    return result;
}
int main()
{
    int A[]={2,4,10,10,10,18,20};
    int n = sizeof(A)/sizeof(A[0]);
    int x;
    cout<<"Enter a nubmer: ";
    cin>>x;
    int index = BinarySearch(A,n,x);
    if(index!=-1)
    {
        cout<<"Found at index : "<<index<<endl;
    }
    else
    {
        cout<<"Not found!"<<endl;
    }
    return 0;
}
