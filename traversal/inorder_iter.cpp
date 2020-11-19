#include <stdio.h>

#include "binarytree.h"


#define SIZE 100
int top = -1;
TreeNode* stack[SIZE];

void push(TreeNode* p)
{
	if (top < SIZE - 1)
		stack[++top] = p;
}


TreeNode* pop()
{
	TreeNode* p = NULL;

	if (top >= 0)
		p = stack[top--];

	return p;
}


void inorder_iter(TreeNode* root)
{
	while (1) {
		for (; root; root = root->left)
			push(root);
		
		root = pop();
		if (!root) 
			break;

		printf("[%2d] ", root->data);
		
		root = root->right;
	}
}
