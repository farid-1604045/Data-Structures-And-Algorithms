#include<bits/stdc++.h>
using namespace std;

//Printing subsequence whose sum is k

void Print(int ind, vector<int>&ds, int sum, int s, int arr[], int n)
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
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    Print(ind+1,ds,sum,s,arr,n);
    s-=arr[ind];
    ds.pop_back();

    //not pick
    Print(ind+1,ds,sum,s,arr,n);
}
int main()
{
    int arr[]= {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int>ds;
    Print(0,ds,sum,0,arr,n);
}
