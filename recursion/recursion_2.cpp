#include<bits/stdc++.h>
using namespace std;

//Print linearly from 1 to N

int cnt=1;
void Print(int n)
{
    if(cnt>n)
    {
        return;
    }
    cout<<cnt<<' ';
    cnt++;
    Print(n);
}
int main()
{
    Print(10);
    return 0;
}
