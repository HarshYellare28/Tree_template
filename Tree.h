#include<iostream>
using namespace std;

#ifndef TREE_H
#define TREE_H

typedef struct TreeNode_tag
{
    int key;
    struct TreeNode_tag* left;
    struct TreeNode_tag* right;   
}TreeNode;

void InsertInTree(TreeNode** rootPtr);
TreeNode* MakeTreeNode(int key);
void BreadthFirstTraversalDisplay(TreeNode* ptr);

#endif