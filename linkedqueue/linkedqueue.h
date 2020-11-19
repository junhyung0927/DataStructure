#pragma once

typedef int element;		// 요소의 타입
typedef struct QueueNode {	// 큐의 노드의 타입 
	element data;
	struct QueueNode* link;
} QueueNode;

typedef struct {			// 큐 ADT 구현
	QueueNode* front, * rear;
} LinkedQueueType;

void init(LinkedQueueType* q);
int is_empty(LinkedQueueType* q);
int is_full(LinkedQueueType* q);
void enqueue(LinkedQueueType* q, element data);
element dequeue(LinkedQueueType* q);
void print_queue(LinkedQueueType* q);