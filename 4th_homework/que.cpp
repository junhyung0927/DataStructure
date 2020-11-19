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

// ���� �Լ�
void enqueue(QueueType *q, element item) {
    if (is_full(q)) error("ť�� ��ȭ�����Դϴ�");
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

// ���� �Լ�
element dequeue(QueueType *q) {
    if (is_empty(q)) error("ť�� ��������Դϴ�");
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
//            printf("������ �����մϴ�. ������ ä�� �Ŀ� �õ��ϼ���\n");
//            exit(1);
//        } else {
//            int documentLength = dequeue(queue);
//            n -= documentLength;
//            printf("���� %d���� ����մϴ�...\n", documentLength);
//        }
//    }
//    printf("���̻� ����� ������ �����ϴ�.\n");
    int a = 0;
    for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
        a = a + queue->rear[queue->data];
        if (a > paperCnt) {
            printf("������ �����մϴ�. ������ ä�� �Ŀ� �õ��ϼ���.\n");
            exit(1);
        }
        else
            printf("���� %d���� ����մϴ�...\n", dequeue(queue));
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

// ������ �������� ���� ��⿭�̴�. ���� ���� ������ ������ 100��ŭ �ִٰ� �� ��,
// ������ �����ϴٸ� "������ �����մϴ�"�� ����� �� ���α׷��� �����ϰ�,
// �װ� �ƴ� ��� "���� %d���� ����մϴ�..."�� ����� �� ��⿭���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.