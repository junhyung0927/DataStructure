#include <stdio.h>
#include "binarytree.h"

int main(void){
    TreeNode n1 = {1, NULL, NULL};
    TreeNode n2 = {4, &n1, NULL};
    TreeNode n3 = { 16, NULL, NULL};
    TreeNode n4 = { 25, NULL, NULL};
    TreeNode n5 = { 20, &n3, &n4};
    TreeNode n6 = { 15, &n2, &n5};

    TreeNode* root = &n6;

    preorder(root);
    printf("\n");

    inorder(root);
    printf("\n");

    postorder(root);
    printf("\n");

    printf("\n반복 중위 순회 = ");
    inorder_iter(root);
    printf("\n");

    printf("\n레벨 순서 순회 = ");
    level_order(root);
    printf("\n");
    return 0;
}