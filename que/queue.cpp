#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
void init_queue(QueueType *q) {
    q->front = -1;
    q->rear = -1;
}

int is_full(QueueType *q) {
    if (q->rear == MAX_QUEUE_SIZE - 1) {
        return 1;
    } else {
        return 0;
    }
}

void enqueue(QueueType *q, element item) {
    if (is_full(q)) {
        fprintf(stderr, "큐가 포화상태입니다.\n");
        return;
    }
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
    //q->data[++(q->rear)] = item
}
int is_empty(QueueType *q){
    if(q->front == q->rear)
        return 1;
    else
        return 0;
}

element dequeue(QueueType *q) {
//    printf("front = %d, rear =%d\n", q->front, q->rear);
    if(is_empty(q)){
       fprintf(stderr, "큐가 공백입니다.\n");
       exit(1);
    }
//    (q->front)++;
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    element item = q->data[q->front];
    return item;
}

