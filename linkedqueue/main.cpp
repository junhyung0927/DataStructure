#include "linkedqueue.h"

// ����� ť �׽�Ʈ �Լ�
int main(void)
{
	LinkedQueueType queue;

	init(&queue);		// ť �ʱ�ȭ

	enqueue(&queue, 1);	print_queue(&queue);
	enqueue(&queue, 2);	print_queue(&queue);
	enqueue(&queue, 3);	print_queue(&queue);
	dequeue(&queue);	print_queue(&queue);
	dequeue(&queue);	print_queue(&queue);
	dequeue(&queue);	print_queue(&queue);

	return 0;
}