#include<bits/stdc++.h>
using namespace std;

//Print Name 5 times

int cnt=0;
void Print()
{
    if(cnt==5)
    {
        return;
    }
    cout<<"Striver's"<<endl;
    cnt++;
    Print();
}
int main()
{
    Print();
    return 0;
}
