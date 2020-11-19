#include "binarysearchtree.h"
#include <stdio.h>

//순화적인 이진 탐색 함수
TreeNode* search(TreeNode* root, element key)
{
    if(root == NULL)
        return NULL;
    //루트와 같은 경우
    if(key == root->key )
        return root;
    //루트보다 작은 경우
    else if(key<root->key)
        return search(root->left, key);
    //루트보다 큰 경우
    else
        return search(root->right, key);

}