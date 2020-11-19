#include <stdio.h>
#include <string.h>

#include "stack.h"

// �������� �켱������ ��ȯ�Ѵ�.
int prec(char op)
{
    switch (op) {
        case '(': case ')': return 0;
        case '+': case '-': return 1;
        case '*': case '/': return 2;
    }
    return -1;
}
// ���� ǥ�� ���� -> ���� ǥ�� ����
int infix_to_postfix(char exp[], char result[])
{
    int i = 0;
    int n = 0;
    char ch, top_op;
    int len = strlen(exp);
    StackType s;

    init_stack(&s);					// ���� �ʱ�ȭ
    for (i = 0; i < len; i++) {
        ch = exp[i];
        switch (ch) {
            case '+': case '-': case '*': case '/': // ������
                // ���ÿ� �ִ� �������� �켱������ �� ũ�ų� ������ ���
                while (!is_empty(&s) && (prec(ch) <= prec(peek(&s)))) {
                    // printf("%c", pop(&s));
                    result[n] = pop(&s);
                    printf("%c", result[n]);
                    n++;
                }
                push(&s, ch);
                break;
            case '(':	// ���� ��ȣ
                push(&s, ch);
                break;
            case ')':	// ������ ��ȣ
                top_op = pop(&s);
                // ���� ��ȣ�� ���������� ���
                while (top_op != '(') {
                    printf("%c", top_op);
                    result[n++] = top_op;
                    top_op = pop(&s);
                }
                break;
            default:		// �ǿ�����
                printf("%c", ch);
                result[n++] = ch;
                break;
        }
    }
    while (!is_empty(&s)) {	// ���ÿ� ����� �����ڵ� ���
        result[n] = pop(&s);
        printf("%c", n);
        n++;
    }
    result[n] = 0;

    return n;

}