
#include <stdio.h>

#include "binarytree.h"
#include "queue.h"

void level_order(TreeNode* ptr)
{
	QueueType q;

	init_queue(&q);	 // 큐 초기화

	if (ptr == NULL)
		return;

	enqueue(&q, ptr);
	
	while (!is_empty(&q)) {
		ptr = dequeue(&q);
		printf("[%2d] ", ptr->data);
		if (ptr->left)
			enqueue(&q, ptr->left);
		if (ptr->right)
			enqueue(&q, ptr->right);
	}
}
