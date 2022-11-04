#include<bits/stdc++.h>
using namespace std;

void solve(int ind, vector<int>&ds, vector<vector<int>>&ans, int target, int sum, int arr[], int n)
{
    if(ind==n)
    {
        if(sum==target)
        {
            ans.push_back(ds);
        }
        return;
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    solve(ind+1, ds, ans, target, sum, arr, n);
    sum-=arr[ind];
    ds.pop_back();
    solve(ind+1, ds, ans, target, sum, arr, n);
}
int main()
{
    int arr[]={10,1,2,7,6,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    sort(arr,arr+n);
    vector<vector<int>>ans;
    vector<int>ds;
    solve(0,ds,ans,target,0,arr,n);
    return ans;
}
