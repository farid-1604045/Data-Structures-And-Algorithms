//Pointer types, void pointer, pointer arithmetic
//int* -> int , char* -> char

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of interger is %d bytes\n",sizeof(int));
    printf("Address = %d, value = %d\n",p,*p);
    printf("Address = %d, value = %d\n",p+1,*(p+1));
    char *p0;
    p0 = (char*)p; //typecasting
    printf("Size of char is is %d bytes\n",sizeof(char));
    printf("Address = %d, value = %d\n",p0,*p0);
    printf("Address = %d, value = %d\n",p0+1,*(p0+1));

    //void pointer - Generic pointer
    void *p0;
    p0 = p; //Don't need typecasting
    printf("Address = %d",p0);
    printf("Address = %d",p0+1); //we can only perform address operation


    // 1025 = 00000000 0000000 00000100 000000001
//    cout<<"size of integer is: "<<sizeof(int)<<" bytes"<<endl;
//    cout<<"Adress = "<<p<<" value = "<<*p<<endl;

//    char *p0;
//    p0 = (char*)p; //typecasting
//    cout<<"size of char is: "<<sizeof(char)<<endl;
//    cout<<"Address = "<<p0<<" value = "<<*p0<<endl;
}
