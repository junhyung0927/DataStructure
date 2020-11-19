#pragma once

typedef int element;		// ����� Ÿ��
typedef struct QueueNode {	// ť�� ����� Ÿ�� 
	element data;
	struct QueueNode* link;
} QueueNode;

typedef struct {			// ť ADT ����
	QueueNode* front, * rear;
} LinkedQueueType;

void init(LinkedQueueType* q);
int is_empty(LinkedQueueType* q);
int is_full(LinkedQueueType* q);
void enqueue(LinkedQueueType* q, element data);
element dequeue(LinkedQueueType* q);
void print_queue(LinkedQueueType* q);