#include "binarysearchtree.h"
#include <stdio.h>

//��ȭ���� ���� Ž�� �Լ�
TreeNode* search(TreeNode* root, element key)
{
    if(root == NULL)
        return NULL;
    //��Ʈ�� ���� ���
    if(key == root->key )
        return root;
    //��Ʈ���� ���� ���
    else if(key<root->key)
        return search(root->left, key);
    //��Ʈ���� ū ���
    else
        return search(root->right, key);

}