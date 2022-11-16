// Preorder Traversal
// Time Complexity - O(N)
// Space Complexity - O(h)
// Worst case - O(N)
// Best/Average - O(logN)

#include<bits/stdc++.h>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};

void PreOrder(BstNode* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
BstNode* GetNewNode(int data)
{
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
BstNode* Insert(BstNode* root, int data)
{
    if(root == NULL)
    {
        root = GetNewNode(data);
        return root;
    }
    else if(data<=root->data)
    {
        root->left = Insert(root->left,data);
    }
    else
    {
        root->right = Insert(root->right,data);
    }
    return root;
}

int main()
{
    BstNode* root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 16);
    root = Insert(root, 45);

    PreOrder(root);

    return 0;
}

