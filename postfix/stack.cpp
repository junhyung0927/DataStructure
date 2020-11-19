#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

// ���� �ʱ�ȭ �Լ�
void init_stack(StackType* s)
{
    s->top = -1;

    // ���� �߰� �κ�
    s->capacity = 1;
    s->data = (element *)malloc(s->capacity * sizeof(element));

}

// ���� ���� ���� �Լ�
int is_empty(StackType* s)
{
    return (s->top == -1);
}
// ��ȭ ���� ���� �Լ�
int is_full(StackType* s)
{
    // return (s->top == (MAX_STACK_SIZE - 1));
    return (s->top == (s->capacity - 1));
}
// �����Լ�
void push(StackType* s, element item)
{
    if (is_full(s)) {
        // fprintf(stderr, "���� ��ȭ ����\n");
        // return;
        s->capacity *= 2;
        s->data =
                (element*)realloc(s->data, s->capacity * sizeof(element));
        if (s->data == NULL) {
            fprintf(stderr, "�޸� ���Ҵ� ����");
            return;
        }
    }


    s->data[++(s->top)] = item;

}
// �����Լ�
element pop(StackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "���� ���� ����\n");
        exit(1);
    }
    else return s->data[(s->top)--];
}
// ��ũ�Լ�
element peek(StackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "���� ���� ����\n");
        exit(1);
    }
    else return s->data[s->top];
}

void deleteS(StackType* s)
{
    free(s->data);
}