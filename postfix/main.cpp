#include <stdio.h>

#include "stack.h"

int infix_to_postfix(char exp[], char result[]);
int eval(char exp[]);

int main(void)
{
	char* s = (char*)"(2+3)*4+9";
	char r[100];

    printf("����ǥ�ü��� %s \n", s);
    printf("����ǥ�ü��� ");
    int len = infix_to_postfix(s, r);
    printf("\n");

    for (int i = 0; i < len; i++) {
        printf("%c", r[i]);
    }

    int result;
    printf("����ǥ����� 82/3-32*+\n");
    result = eval((char*)"82/3-32*+");
    printf("������� %d\n", result);

    printf("����ǥ����� %s\n", r);
    result = eval(r);
    printf("������� %d\n", result);

    return 0;

	return 0;
}