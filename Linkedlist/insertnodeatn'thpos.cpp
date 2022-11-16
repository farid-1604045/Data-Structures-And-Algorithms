#include<bits/stdc++.h>
using namespace std;

//Inserting node at n'th position

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
void Insert(int data, int pos)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(pos==1)
    {
        temp->next = head;
        head = temp;
        return;
    }
    Node* temp1 = head;
    for(int i=0; i<pos-2; i++)
    {
        temp1 = temp1->next;
    }
    Node* temp2 = temp1->next;
    temp1->next = temp;
    temp->next = temp2;
}

int main()
{
    head = NULL;
    cout<<"How many numbers?"<<endl;
    int n,i;
    cin>>n;
    int pos;
    for(i=0; i<n; i++)
    {
        cout<<"Enter the number: "<<endl;
        int x;
        cin>>x>>pos;
        Insert(x,pos);
    }
    cout<<"Output of the entered number"<<endl;
    Print();
    return 0;
}
