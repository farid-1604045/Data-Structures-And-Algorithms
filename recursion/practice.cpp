#include<bits/stdc++.h>
using namespace std;

int A[50];
int Fibonacci(int n)
{
    if(n<2)
    {
        return n;
    }
    if(A[n]!=-1)
    {
        return A[n];
    }
    A[n] =  Fibonacci(n-1)+Fibonacci(n-2);
    //A[n]=ans;
    return A[n];
}
int main()
{
    int n;
    cin>>n;
    memset(A,-1,sizeof A);
    cout<<Fibonacci(n)<<endl;
}
