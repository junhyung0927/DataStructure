#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H

#endif //UNTITLED_STACK_H

#define MAX_STACK_SIZE 100
typedef int element;

typedef struct{
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

void init_stack(StackType *s);
void push(StackType *s, element item);
element pop(StackType *s);