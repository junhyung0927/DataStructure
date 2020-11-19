#include <stdio.h>
#include <string.h>

#include "stack.h"

// 연산자의 우선순위를 반환한다.
int prec(char op)
{
    switch (op) {
        case '(': case ')': return 0;
        case '+': case '-': return 1;
        case '*': case '/': return 2;
    }
    return -1;
}
// 중위 표기 수식 -> 후위 표기 수식
int infix_to_postfix(char exp[], char result[])
{
    int i = 0;
    int n = 0;
    char ch, top_op;
    int len = strlen(exp);
    StackType s;

    init_stack(&s);					// 스택 초기화
    for (i = 0; i < len; i++) {
        ch = exp[i];
        switch (ch) {
            case '+': case '-': case '*': case '/': // 연산자
                // 스택에 있는 연산자의 우선순위가 더 크거나 같으면 출력
                while (!is_empty(&s) && (prec(ch) <= prec(peek(&s)))) {
                    // printf("%c", pop(&s));
                    result[n] = pop(&s);
                    printf("%c", result[n]);
                    n++;
                }
                push(&s, ch);
                break;
            case '(':	// 왼쪽 괄호
                push(&s, ch);
                break;
            case ')':	// 오른쪽 괄호
                top_op = pop(&s);
                // 왼쪽 괄호를 만날때까지 출력
                while (top_op != '(') {
                    printf("%c", top_op);
                    result[n++] = top_op;
                    top_op = pop(&s);
                }
                break;
            default:		// 피연산자
                printf("%c", ch);
                result[n++] = ch;
                break;
        }
    }
    while (!is_empty(&s)) {	// 스택에 저장된 연산자들 출력
        result[n] = pop(&s);
        printf("%c", n);
        n++;
    }
    result[n] = 0;

    return n;

}