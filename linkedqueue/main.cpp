#include "linkedqueue.h"

// 연결된 큐 테스트 함수
int main(void)
{
	LinkedQueueType queue;

	init(&queue);		// 큐 초기화

	enqueue(&queue, 1);	print_queue(&queue);
	enqueue(&queue, 2);	print_queue(&queue);
	enqueue(&queue, 3);	print_queue(&queue);
	dequeue(&queue);	print_queue(&queue);
	dequeue(&queue);	print_queue(&queue);
	dequeue(&queue);	print_queue(&queue);

	return 0;
}