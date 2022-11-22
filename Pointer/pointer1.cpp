//Pointers - variables that store address of another variable
//pointers also take 4 bytes of memory
//int a; int *p; p = &a; a=5; Print p; output = 204 address of a

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    int *p;
    p = &a;
    a = 5;
    cout<<a<<endl; //5
    cout<<p<<endl; //204
    cout<<&a<<endl; //204
    cout<<&p<<endl; //64
    cout<<*p<<endl; //5
    *p = 8;
    cout<<a<<endl;//8

    cout<<p+1<<endl; //208
    cout<<"size of interger: "<<sizeof(int)<<" bytes"<<endl;
}
