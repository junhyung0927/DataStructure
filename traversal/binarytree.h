#pragma once

typedef struct TreeNode{
    int data;
    struct TreeNode *left, *right;
}TreeNode;

void preorder(TreeNode* root);
void inorder(TreeNode* root);
void postorder(TreeNode* root);
void inorder_iter(TreeNode* root);
void level_order(TreeNode* root);