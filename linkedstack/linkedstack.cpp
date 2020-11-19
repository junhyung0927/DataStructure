#include <stdio.h>
#include <stdlib.h>

#include "linkedstack.h"

void init(LinkedStackType* s)
{
    s->top = NULL;
}
int is_empty(LinkedStackType* s)
{
    return (s->top == NULL);
}
int is_full(LinkedStackType* s)
{
    return 0;
}
void push(LinkedStackType* s, element item)
{
    StackNode *newNode = (StackNode*)malloc(sizeof(StackNode));

    if(newNode == NULL)
        return;

    newNode->data = item;
    newNode->link = s->top;
    s->top = newNode;

}
void print_stack(LinkedStackType* s)
{
    for(StackNode* p = s->top; p!=NULL; p=p->link)
    {
        printf("%d->", p->data);
    }
    printf("NULL \n");
}

element pop(LinkedStackType* s)
{
    if(is_empty(s)){
        fprintf(stderr, "스택이 비어 있음\n");
        exit(1);
    }

    StackNode* deleteNode = s->top;
    element data = deleteNode->data;
    s->top = s->top->link;
    //s->top = deleteNode->link;
    free(deleteNode);

    return data;
}
element peek(LinkedStackType* s)
{

}