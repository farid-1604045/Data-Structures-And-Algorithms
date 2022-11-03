
#include<bits/stdc++.h>
using namespace std;

//Printing subsequence whose sum is k for only one answer

bool Print(int ind, vector<int>&ds, int sum, int s, int arr[], int n)
{
    if(ind==n)
    {
        if(s==sum)
        {
            for(auto it: ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        else
            return false;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    if(Print(ind+1,ds,sum,s,arr,n)==true)
    {
        return true;
    }
    s-=arr[ind];
    ds.pop_back();

    //not pick
    if(Print(ind+1,ds,sum,s,arr,n)==true)
        return true;

    return false;
}
int main()
{
    int arr[]= {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int>ds;
    Print(0,ds,sum,0,arr,n);
}
