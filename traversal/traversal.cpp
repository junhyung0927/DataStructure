#include <stdio.h>
#include "binarytree.h"

//���� ��ȸ: V L R
void preorder(TreeNode* root)
{
    if(root == NULL)
        return;

    printf("[%2d] ", root->data); //V
    preorder(root->left); //L
    preorder(root->right); //R

}

// ���� ��ȸ: L V R
void inorder(TreeNode* root)
{
    if(root == NULL)
        return;

    inorder(root->left); //L
    printf("[%2d] ", root->data); //V
    inorder(root->right); //R
}

// ���� ��ȸ: L R V
void postorder(TreeNode* root)
{
    if(root == NULL)
        return;

    postorder(root->left); //L
    postorder(root->right); //R
    printf("[%2d] ", root->data); //V
}