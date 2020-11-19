#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

void init_stack(StackType *s) {
    s->top = -1;
}

int is_empty(StackType *s) {
    return (s->top == -1);
}

int is_full(StackType *s) {
    return (s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType *s, element item) {
    if (is_full(s)) {
        fprintf(stderr, "스택 포화 에러\n");
        return;
    } else {
        s->data[++(s->top)] = item;
    }
}

element pop(StackType *s) {
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    } else {
        return s->data[(s->top)--];
    }
}

void reverseString(char *spell, StackType *s) {
    int i;

    for (i = 0; i < strlen(spell); i++) {
        push(s, spell[i]);
    }

    while (!is_empty(s))
        printf("%c", pop(s));
}

element peek(StackType *s) {
    if (is_empty(s)) {
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    } else return s->data[s->top];
}

void deleteS(StackType *s) {

}

int main(void) {
    StackType* ps;
    ps = (StackType*)malloc(sizeof(StackType));
    init_stack(ps);

    push(ps, 1);
    push(ps, 2);
    push(ps, 3);

    printf("%d\n", pop(ps));

    return 0;
}

