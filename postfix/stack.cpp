#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

// 스택 초기화 함수
void init_stack(StackType* s)
{
    s->top = -1;

    // 수정 추가 부분
    s->capacity = 1;
    s->data = (element *)malloc(s->capacity * sizeof(element));

}

// 공백 상태 검출 함수
int is_empty(StackType* s)
{
    return (s->top == -1);
}
// 포화 상태 검출 함수
int is_full(StackType* s)
{
    // return (s->top == (MAX_STACK_SIZE - 1));
    return (s->top == (s->capacity - 1));
}
// 삽입함수
void push(StackType* s, element item)
{
    if (is_full(s)) {
        // fprintf(stderr, "스택 포화 에러\n");
        // return;
        s->capacity *= 2;
        s->data =
                (element*)realloc(s->data, s->capacity * sizeof(element));
        if (s->data == NULL) {
            fprintf(stderr, "메모리 재할당 오류");
            return;
        }
    }


    s->data[++(s->top)] = item;

}
// 삭제함수
element pop(StackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return s->data[(s->top)--];
}
// 피크함수
element peek(StackType* s)
{
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    }
    else return s->data[s->top];
}

void deleteS(StackType* s)
{
    free(s->data);
}