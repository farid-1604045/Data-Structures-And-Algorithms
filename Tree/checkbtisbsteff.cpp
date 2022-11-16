//Efficient solution to check bt is bst
//Time Complexity - O(N)
#include<bits/stdc++.h>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};

bool IsBinarySearchTree(BstNode* root, int minValue, int maxValue)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data > minValue && root->data <= maxValue
            && IsBinarySearchTree(root->left, minValue, root->data)
            && IsBinarySearchTree(root->right, root->data, maxValue))
    {
        return true;
    }
    else
    {
        return false;
    }
}
// ot->data > minValue && root->data <= maxValue
bool IsBsUtil(BstNode* root)
{
    return IsBinarySearchTree(root,INT_MIN,INT_MAX);
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

    bool ok = IsBsUtil(root);
    cout<<ok<<endl;
    return 0;
}

