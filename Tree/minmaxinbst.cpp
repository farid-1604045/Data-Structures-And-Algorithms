//Find min and max value in BST
#include<bits/stdc++.h>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};
//int FindMin(BstNode* root)//iterative solution
//{
//    if(root=NULL)
//    {
//        cout<<"Tree is Empty"<<endl;
//        return -1;
//    }
//    BstNode* current = root;
//    while(current->left!=NULL)
//    {
//        current = current->left;
//    }
//    return current->data;
//}

int FindMin(BstNode* root)//using recursion
{
    if(root==NULL)
    {
        cout<<"Error: Tree is empty"<<endl;
        return -1;
    }
    else if(root->left==NULL)
    {
        return root->data;
    }
    return FindMin(root->left);
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

bool Search(BstNode* root, int data)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data == data)
    {
        return true;
    }
    else if(data<=root->data)
    {
        return Search(root->left, data);
    }
    else
    {
        return Search(root->right,data);
    }
}
int main()
{
    BstNode* root = NULL;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 30);
    root = Insert(root, 45);
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    if(Search(root,number)==true)
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

    cout<<FindMin(root)<<endl;
    return 0;

}
