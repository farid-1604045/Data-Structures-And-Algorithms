//Time complexity - O(N)
//Delete Node from BST
#include<bits/stdc++.h>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* FindMin(BstNode* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}
BstNode* Delete(BstNode* root, int data)
{
    if(root==NULL)
    {
        return root;
    }
    else if(data < root->data)
    {
        root->left = Delete(root->left, data);
    }
    else if(data > root->data)
    {
        root->right = Delete(root->right,data);
    }
    else //Woho....i found you, get ready to be deleted
    {
        //Case 1: No child;
        if(root->left == NULL && root->right==NULL)
        {
            delete root;
            root = NULL;
        }
        else if(root->left == NULL)
        {
            BstNode* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL)
        {
            BstNode* temp = root;
            root = root->left;
            delete temp;
        }
        else //Case 3: 2 children
        {
            BstNode* temp = FindMin(root->right);
            root->data  = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}
void PostOrder(BstNode* root)
{
    if(root == NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
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
    root = Delete(root, 15);
    cout<<"After Deletion"<<endl;
    PostOrder(root);
    return 0;
}


