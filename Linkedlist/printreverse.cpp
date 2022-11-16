//Print forward and reverse using recursion
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head;

void ForwardPrint(Node* head)
{
    if(head->next==NULL)
    {
        cout<<head->data<<" ";
        return;
    }
    cout<<head->data<<" ";
    ForwardPrint(head->next);
}
void ReversePrint(Node* head)
{
    if(head->next==NULL)
    {
        cout<<head->data<<" ";
        return;
    }
    ReversePrint(head->next);
    cout<<head->data<<" ";
}
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
    cout<<endl;
    cout<<"Print linked list reversely"<<endl;
    ReversePrint(head);
    cout<<endl;
    cout<<"Print forward using recursion"<<endl;
    ForwardPrint(head);
    return 0;
}
