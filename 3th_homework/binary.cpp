#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100
typedef int element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

// 스택 초기화 함수
void init_stack(StackType *s) {
    s->top = -1;
}

// 공백 상태 검출 함수
int is_empty(StackType *s) {
    return (s->top == -1);
}

// 포화 상태 검출 함수
int is_full(StackType *s) {
    return (s->top == (MAX_STACK_SIZE - 1));
}

// 삽입함수
void push(StackType *s, element item) {
    if (is_full(s)) {
        fprintf(stderr, "스택 포화 에러\n");
        return;

    } else { s->data[++(s->top)] = item; }
}

// 삭제함수
element pop(StackType *s) {
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    } else {
        return s->data[(s->top)--];
    }
}


void reverseString(char *spell, StackType *s){
    int i;

    for(i=0; i<strlen(spell); i++){
        push(s, spell[i]);
    }

    while(!is_empty(s))
        printf("%c", pop(s));
}

// 10진수를 2진수로 변환하고 출력하는 함수를 작성하시오.

void decimal_to_binary(StackType *s, int decimal) {
    while (decimal != 0) {
        push(s, decimal % 2);
        decimal /= 2;
    }
    while (!is_empty(s)) {
        printf("%d", pop(s));
    }
    printf("\n");
}


int main(void) {

    StackType *s;
    s = (StackType *)malloc(sizeof(StackType));
    init_stack(s);

    int decimal = 39;

    StackType *stack = (StackType *)malloc(sizeof(StackType));
    init_stack(stack);
    char *spell = (char *) "Hanbat University";
    //수정

    decimal_to_binary(s, decimal);
    printf("\n");
    reverseString(spell, stack);

    free(s);
    free(stack);
    return 0;

}