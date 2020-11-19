#pragma once

#define MAX_QUEUE_SIZE 5

// typedef int element;
typedef struct { // 요소 타입
    int id;
    int arrival_time;
    int service_time;
} element;			// 교체!

typedef struct { 				// 큐 타입
    int  front;
    int rear;
    element  data[MAX_QUEUE_SIZE];
} QueueType;

void init_queue(QueueType* q);
void queue_print(QueueType* q);
int is_full(QueueType* q);
int is_empty(QueueType* q);
void enqueue(QueueType* q, element item);
element dequeue(QueueType* q);