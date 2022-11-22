//Insertion at the beginning of the list

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* tail, *head;

Node* addToEmpty(int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = temp;
    return temp;
}
Node* Insert(Node* tail, int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = tail->next;
    tail->next = temp;
    return tail;
}

void Print(Node* tail)
{
    Node* temp = tail->next;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    while(temp!=tail->next);
}
int main()
{
    tail = NULL;
    tail = addToEmpty(45);
    tail = Insert(tail, 23);
    Print(tail);
    return 0;
}
