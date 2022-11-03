#include<bits/stdc++.h>
using namespace std;
// Print N to 1

void Print(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<' ';
    Print(--n);
}
int main()
{
    Print(10);
    return 0;
}
