#include<bits/stdc++.h>
using namespace std;

void solve(int ind, int n, vector<int>&v, int sum, int target, int arr[])
{
    if(ind>=n)
    {
        if(sum==target)
        {
            for(auto it: v)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    v.push_back(arr[ind]);
    sum+=arr[ind];
    solve(ind+1, n, v, sum, target, arr);
    sum-=arr[ind];
    v.pop_back();
    solve(ind+1, n, v, sum, target, arr);
}
int main()
{
    int arr[]={2,3,6,7};
    int n = 4;
    int target = 7;
    vector<int>v;
    solve(0,n,v,0,target,arr);
}
