//Level order traversal
//Time complexity - O(N)
//Space complexity - O(1) best
//                 - O(N/2) worst case for perfect BT
#include<bits/stdc++.h>
using namespace std;

struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};

void LevelOrder(BstNode* root)
{
    if(root == NULL)
    {
        return;
    }
    queue<BstNode*>q;
    q.push(root);
    while(!q.empty())
    {
        BstNode* current = q.front();
        q.pop();
        cout<<current->data<<" ";
        if(current->left!=NULL)
        {
            q.push(current->left);
        }
        if(current->right!=NULL)
        {
            q.push(current->right);
        }
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
    root = Insert(root, 30);
    root = Insert(root, 45);

    LevelOrder(root);

    return 0;
}
