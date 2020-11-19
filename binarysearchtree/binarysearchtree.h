#pragma once

typedef int element;

typedef struct TreeNode{
    element key;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

TreeNode* search(TreeNode* root, element key);
TreeNode* new_node(int item);
TreeNode* insert_node(TreeNode* node, int key);
void inorder(TreeNode* root);
TreeNode* delete_node(TreeNode* root, int key);