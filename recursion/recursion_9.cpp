#include<bits/stdc++.h>
using namespace std;

// Check if a given string is palindrome or not

bool Palindrome(string s, int i, int j)
{
    if(i>j)
    {
        return true;
    }
    if(s[i]!=s[j])
    {
        return false;
    }
    return Palindrome(s,i+1,j-1);

}
int main()
{
    string s;
    cin>>s;
    int i=0,j=s.size()-1;
    bool ok = Palindrome(s,i,j);
    if(ok==true)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not"<<endl;
    }
    return 0;
}
