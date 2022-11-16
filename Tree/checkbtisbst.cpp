//Check if binary tree is bst or not
//But this solution is not efficient
//Time Complexity - O(N^2)
#include<bits/stdc++.h>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};

bool IsSubtreeLesser(BstNode* root, int value)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data<=value && IsSubtreeLesser(root->left, value)
       && IsSubtreeLesser(root->right,value))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsSubtreeGreater(BstNode* root, int value)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data > value && IsSubtreeGreater(root->left, value)
       && IsSubtreeGreater(root->right,value))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool IsBinarySearchTree(BstNode* root)
{
    if(root==NULL)
    {
        return true;
    }
    if(IsSubtreeLesser(root->left,root->data)
       && IsSubtreeGreater(root->right,root->data)
       && IsBinarySearchTree(root->left)
       && IsBinarySearchTree(root->right))
    {
        return true;
    }
    else
    {
        return false;
    }
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

    bool ok = IsBinarySearchTree(root);
    cout<<ok<<endl;
    return 0;
}
