#include <stdio.h>
#include <stdlib.h>
#include "queue.h"



int main(void){
    //Å¥ »ý¼º
    QueueType q;

    init_queue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));

    enqueue(&q, 30);
    return 0;
}