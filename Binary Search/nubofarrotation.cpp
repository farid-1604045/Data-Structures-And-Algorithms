#include<bits/stdc++.h>
using namespace std;

//How many time a sorted array is rotated
//Linear approach
//Time complexity - O(N)
int main()
{
    int A[]={13,14,2,3,5,8,11,12};
    int n = sizeof(A)/sizeof(A[0]);
    int min_ = A[0];
    int minIndex = 0;
    for(int i=1; i<n; i++)
    {
        if(min_>A[i])
        {
            min_ = A[i];
            minIndex = i;
        }
    }

//    for(int i=1; i<n; i++)
//    {
//        if(A[i]<min_)
//        {
//            min_ = A[i];//Minimum value
//        }
//    }
//    cout<<min_<<endl;
    cout<<minIndex<<endl;
    return 0;
}
