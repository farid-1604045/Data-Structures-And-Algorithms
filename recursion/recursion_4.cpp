#include<bits/stdc++.h>
using namespace std;

//Print N to 1 using backtrack

void Print(int i, int n)
{
    if(i>n)
    {
        return;
    }
    Print(i+1,n);
    cout<<i<<' ';
}
int main()
{
    Print(1,10);
    return 0;
}
