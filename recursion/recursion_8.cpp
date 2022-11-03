#include<bits/stdc++.h>
using namespace std;

//Fibonacci series

int Fibonacci(int n)
{
    int last, slast;
    int x=0,y=1,z=2;
    if(n<2)
    {
        cout<<4<<endl;
        return n;
    }
    cout<<x<<endl;
    last = Fibonacci(n-1);
    cout<<y<<endl;
    slast = Fibonacci(n-2);
    cout<<z<<endl;
    return last + slast;
    //return Fibonacci(n-1) + Fibonacci(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<Fibonacci(n)<<endl;
    return 0;
}
