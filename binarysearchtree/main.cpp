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

    printf("중위 순회 결과 = ");
    inorder(root);
    printf("\n\n");
    TreeNode* searchNode = search(root, 30);

    if(searchNode == NULL)
        printf("찾고자하는 노드 없음.\n");
    else
        printf("찾고자하는 노드 찾았음 => %d\n\n", searchNode->key);

    delete_node(root, 30);



    return 0;
}