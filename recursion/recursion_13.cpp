#include<bits/stdc++.h>
using namespace std;

//count subsequence whose sum is k

int Print(int ind, vector<int>&ds, int sum, int s, int arr[], int n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            return 1;
        }
        else
            return 0;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    int l = Print(ind+1,ds,sum,s,arr,n);
    s-=arr[ind];
    ds.pop_back();

    //not pick
    int r = Print(ind+1,ds,sum,s,arr,n);

    return l+r;
}
int main()
{
    int arr[]= {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int>ds;
    cout<<Print(0,ds,sum,0,arr,n)<<endl;
}
