#include <stdio.h>
#include "binarysearchtree.h"
int main(void) {
    TreeNode* root = NULL;

    root = insert_node(root, 30);
    root = insert_node(root, 20);
    root = insert_node(root, 10);
    root = insert_node(root, 40);
    root = insert_node(root, 50);
    root = insert_node(root, 60);

    printf("���� ��ȸ ��� = ");
    inorder(root);
    printf("\n\n");
    TreeNode* searchNode = search(root, 30);

    if(searchNode == NULL)
        printf("ã�����ϴ� ��� ����.\n");
    else
        printf("ã�����ϴ� ��� ã���� => %d\n\n", searchNode->key);

    delete_node(root, 30);



    return 0;
}