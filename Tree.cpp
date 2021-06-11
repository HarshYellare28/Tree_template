#include<bits/stdc++.h>
using namespace std;
#include "Tree.h"

TreeNode* MakeTreeNode(int key)
{
    TreeNode* ptr = (TreeNode*)malloc(sizeof(TreeNode));
    ptr->key = key;
    ptr->left = NULL;
    ptr->right = NULL;
    return ptr;
}

void InsertInTree(TreeNode** rootPtr)
{
    queue<TreeNode*> myQueue;
    int key;
    printf("Enter Root Key\n");
    scanf("%d",&key);
    TreeNode* temp = MakeTreeNode(key);
    (*rootPtr) = temp ;
    myQueue.push(temp);
    while (!myQueue.empty())
    {
        TreeNode* ptr = myQueue.front();
        myQueue.pop();
        printf("Enter left child Key of parent key %d or enter '-1' if no left child exists\n",ptr->key);
        scanf("%d",&key);
        if(key!=-1)
        {
            TreeNode* temp = MakeTreeNode(key);
            ptr->left = temp;
            myQueue.push(temp);
        }
        printf("Enter right child Key of parent key %d or enter '-1' if no right child exists\n",ptr->key);
        scanf("%d",&key);
        if(key!=-1)
        {
            TreeNode* temp = MakeTreeNode(key);
            ptr->right = temp;
            myQueue.push(temp);
        }        
    }
}

void BreadthFirstTraversalDisplay(TreeNode* ptr)
{
    queue<TreeNode*> myQueue;
    if (ptr!=NULL)
    {
        myQueue.push(ptr);
    }
    while (!myQueue.empty())
    {
        TreeNode* temp = myQueue.front();
        myQueue.pop();
        printf("%d ",temp->key);
        if (temp->left != NULL)
        {
            myQueue.push(temp->left);
        }
        if (temp->right != NULL)
        {
            myQueue.push(temp->right);
        }        
    }
    printf("\n");   
}