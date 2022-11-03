// Subsequences
#include<bits/stdc++.h>
using namespace std;

void Print(int ind, vector<int>&ds, int arr[], int n)
{
    if(ind==n)
    {
        for(auto it: ds)
        {
            cout<<it<<" ";
        }

        if(ds.size()==0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    //take or pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    Print(ind+1,ds,arr,n);
    ds.pop_back();

    //not pick, or not take condition, this element is not added

    Print(ind+1, ds, arr, n);
}
int main()
{

    int arr[] = {3,1,2};
    int n = 3;
    vector<int>ds;
    Print(0, ds, arr, n);
    /*string s;
    cin>>s;
    int n = s.size();

    string sub;
    for(int num = 0; num<(1<<n); num++)
    {
        sub = "";
        for(int i=0; i<n; i++)
        {
            if(num & (1<<i))
            {
                sub+=s[i];
            }
        }
        cout<<sub<<endl;
    }*/

}
