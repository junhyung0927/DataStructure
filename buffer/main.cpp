#include <stdlib.h>
#include <time.h>
#include "queue.h"

int main(void)
{
    QueueType queue;

    init_queue(&queue);
    srand((unsigned int)time(NULL));

    for (int i = 0; i < 100; i++) {
        if (rand() % 5 == 0) {	// 5�� ������ ��������
            enqueue(&queue, rand() % 100);
        }
        queue_print(&queue);
        if (rand() % 10 == 0) {	// 10�� ������ ��������
            int data = dequeue(&queue);
        }
        queue_print(&queue);
    }
    return 0;

}