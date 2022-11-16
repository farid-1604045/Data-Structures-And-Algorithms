//Insert a node at beginning

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head;

void Print()
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void Insert(int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}

int main()
{
    head = NULL;
    cout<<"How many numbers?"<<endl;
    int n,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Enter the number: "<<endl;
        int x;
        cin>>x;
        Insert(x);
    }
    cout<<"Output of the entered number"<<endl;
    Print();
    return 0;
}
