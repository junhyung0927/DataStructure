#include <string.h>

#include "stack.h"

// ���� ǥ�� ���� ��� �Լ�
int eval(char exp[])
{
    int op1, op2, value, i = 0;
    int len = strlen(exp);
    char ch;
    StackType s;

    init_stack(&s);
    for (i = 0; i < len; i++) {
        ch = exp[i];
        if (ch != '+' && ch != '-' && ch != '*' && ch != '/') {
            value = ch - '0';	// �Է��� �ǿ������̸�
            push(&s, value);
        }
        else {	//�������̸� �ǿ����ڸ� ���ÿ��� ����
            op2 = pop(&s);
            op1 = pop(&s);
            switch (ch) { //������ �����ϰ� ���ÿ� ����
                case '+': push(&s, op1 + op2); break;
                case '-': push(&s, op1 - op2); break;
                case '*': push(&s, op1 * op2); break;
                case '/': push(&s, op1 / op2); break;
            }
        }
    }
    return pop(&s);

}

