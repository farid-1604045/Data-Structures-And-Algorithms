#include<bits/stdc++.h>
using namespace std;

//Insert node at the beginning of doubly linked list

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

Node *head;

void ReversePrint()
{
    Node* temp = head;
    if(head==NULL)
    {
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    cout<<"Reverse: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
void Print()
{
    Node *temp = head;
    cout<<"Forward: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* GetNewNode(int x)
{
    Node* newNode = new Node();
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void Insert(int data)
{
    Node* newNode = GetNewNode(data);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
int main()
{
    head = NULL;
    Insert(2);
    Insert(3);
    Insert(5);
    Print();
    ReversePrint();
}
