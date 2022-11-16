#include<bits/stdc++.h>
using namespace std;

//Delete at end position

struct Node
{
    int data;
    Node* next;
};

Node* head;

void Delete()
{
    if(head==NULL)
    {
        cout<<"List is already empty"<<endl;
        return;
    }
    Node* temp = head;
    if(temp->next==NULL)
    {
        free(temp);
        head = NULL;
        return;
    }
    Node* temp2 = temp;
    while(temp->next!=NULL)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = NULL;
    free(temp);
}
void Print()
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void Insert(int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head==NULL)
    {
        head = temp;
        return;
    }
    Node* temp1 = head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next = temp;
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
    Delete();
    cout<<"After deleting the number"<<endl;
    Print();
    return 0;
}

