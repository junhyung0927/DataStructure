#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

typedef int element;

typedef struct{
    element data[MAX_STACK_SIZE];
    int top;
} StackType;

void init_stack(StackType *s){
    s -> top =- 1;
}

int is_empty(StackType *s){
    return (s->top == -1);
}
int is_full(StackType *s){
    return (s->top == (MAX_STACK_SIZE - 1));
}
void push(StackType *s, element item)
{
    if(is_full(s)){
        fprintf(stderr, "스택 포화 에러\n");
        return;
    } else {
        s -> data[++(s->top)] = item;
    }
}
element pop(StackType *s)
{
    if(is_empty(s)){
        fprintf(stderr, "스택 공백 에러\n");
        exit(1);
    } else{
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

//void reverseString(char* spell, StackType* s)
//{
//    int idx = 0;
//    while (1) {
//        if (spell[idx] != '\0') {
//            push(s, spell[idx++]);
//        }
//        else
//            break;
//    }
//    for (--idx; idx >= 0; idx--)
//    {
//        printf("%c",pop(s));
//    }
//}

int main(void){
    StackType *stack = (StackType *)malloc(sizeof(StackType));
    init_stack(stack);

    char *spell = (char *) "Hanbat University";
    //수정

    reverseString(spell, stack);

    free(stack);
    //수정

    return 0;
}

