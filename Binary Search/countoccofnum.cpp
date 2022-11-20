//Count occur of number
#include<bits/stdc++.h>
using namespace std;

//Input - {1,2,3,4,4,4,5,5,5,5,7}

int BinarySearch(int A[], int n, int x, bool searchFirst)
{
    int low = 0, high = n-1;
    int result=-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(x==A[mid])
        {
            result = mid;
            if(searchFirst)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
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
    int A[]={1,2,3,4,4,4,5,5,5,5,7};
    int n = sizeof(A)/sizeof(A[0]);

    int x;
    cout<<"Enter a number: ";
    cin>>x;
    int firstIndex = BinarySearch(A,n,x,true);
    if(firstIndex == -1)
    {
        cout<<"Not found!"<<endl;
    }
    else
    {
        int lastIndex = BinarySearch(A,n,x,false);
        cout<<(lastIndex-firstIndex)+1<<endl;
    }
    return 0;
}
