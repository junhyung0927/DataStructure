#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5
typedef int element;
typedef struct {
    int front;
    int rear;
    element data[MAX_QUEUE_SIZE];
} QueueType;

void init_queue(QueueType *q) { q->front = q->rear = 0; }

int is_full(QueueType *q) {
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

int is_empty(QueueType *q) {
    return (q->front == q->rear);
}

void error(char *message) {
    fprintf(stderr, "%s\n", message);
    exit(1);
}

// 삽입 함수
void enqueue(QueueType *q, element item) {
    if (is_full(q)) error("큐가 포화상태입니다");
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

// 삭제 함수
element dequeue(QueueType *q) {
    if (is_empty(q)) error("큐가 공백상태입니다");
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->data[q->front];
}

void queue_print(QueueType *q) {
    printf("QUEUE(front=%d rear=%d) = ", q->front, q->rear);
    if (!is_empty(q)) {
        int i = q->front;
        do {
            i = (i + 1) % (MAX_QUEUE_SIZE);
            printf("%d | ", q->data[i]);
            if (i == q->rear)
                break;

        } while (i != q->front);
    }
    printf("\n");
}

void documentPrint(QueueType *queue, int paperCnt) {
//    int n = paperCnt;
//    while (!is_empty(queue)) {
//        int i = queue->data[queue->front];
//        if ((n - i) < 0) {
//            printf("용지가 부족합니다. 용지를 채운 후에 시도하세요\n");
//            exit(1);
//        } else {
//            int documentLength = dequeue(queue);
//            n -= documentLength;
//            printf("문서 %d장을 출력합니다...\n", documentLength);
//        }
//    }
//    printf("더이상 출력할 문서가 없습니다.\n");
    int a = 0;
    for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
        a = a + queue->rear[queue->data];
        if (a > paperCnt) {
            printf("용지가 부족합니다. 용지를 채운 후에 시도하세요.\n");
            exit(1);
        }
        else
            printf("문서 %d장을 출력합니다...\n", dequeue(queue));
    }
}


int main(void) {
    QueueType queue;
    init_queue(&queue);

    int paperCnt = 100;

    enqueue(&queue, 33);
    enqueue(&queue, 48);
    enqueue(&queue, 42);
    enqueue(&queue, 37);

    documentPrint(&queue, paperCnt);
    return 0;
}

// 다음은 프린터의 문서 대기열이다. 현재 남은 종이의 갯수가 100만큼 있다고 할 때,
// 용지가 부족하다면 "용지가 부족합니다"를 출력한 뒤 프로그램을 종료하고,
// 그게 아닐 경우 "문서 %d장을 출력합니다..."라 출력한 뒤 대기열에서 제외하는 프로그램을 작성하시오.