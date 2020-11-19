#include <stdio.h>
#include <stdlib.h>

#include "linkedqueue.h"

// ť �ʱ�ȭ �Լ�
void init(LinkedQueueType* q)
{
	q->front = q->rear = 0;
}

// ���� ���� ���� �Լ�
int is_empty(LinkedQueueType* q)
{
	return (q->front == NULL);
}

// ��ȭ ���� ���� �Լ�
int is_full(LinkedQueueType* q)
{
	return 0;
}

// ���� �Լ�
void enqueue(LinkedQueueType* q, element data)
{
	QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));
	temp->data = data; 		// ������ ����
	temp->link = NULL; 		// ��ũ �ʵ带 NULL
	if (is_empty(q)) { 		// ť�� �����̸�
		q->front = temp;
		q->rear = temp;
	}
	else { 		// ť�� ������ �ƴϸ�
		q->rear->link = temp;  // ������ �߿�
		q->rear = temp;
	}
}
// ���� �Լ�
element dequeue(LinkedQueueType* q)
{
	QueueNode* temp = q->front;
	element data;
	if (is_empty(q)) {				// �������
		fprintf(stderr, "������ �������\n");
		exit(1);
	}
	else {
		data = temp->data; 			// �����͸� ������.
		q->front = q->front->link;	// front�� ������带 ����Ű���� �Ѵ�.
		if (q->front == NULL) 		// ���� ����
			q->rear = NULL;
		free(temp); 				// �����޸� ����
		return data; 				// ������ ��ȯ
	}
}
void print_queue(LinkedQueueType* q)
{
	QueueNode* p;
	for (p = q->front; p != NULL; p = p->link)
		printf("%d->", p->data);
	printf("NULL\n");
}
