#include<bits/stdc++.h>
using namespace std;

//Delete at n'th position
struct Node
{
    int data;
    Node* next;
};

Node* head;

void Delete(int pos)
{
    Node* temp = head;
    if(pos==1)
    {
        head = temp->next;
        free(temp);
        return;
    }
    for(int i=0; i<pos-2; i++)
    {
        temp = temp->next;
    }
    Node* temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
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
    Delete(2);
    cout<<"After deleting the number"<<endl;
    Print();
    return 0;
}
