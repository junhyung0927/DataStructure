#include <stdio.h>

#include "stack.h"

int infix_to_postfix(char exp[], char result[]);
int eval(char exp[]);

int main(void)
{
	char* s = (char*)"(2+3)*4+9";
	char r[100];

    printf("중위표시수식 %s \n", s);
    printf("후위표시수식 ");
    int len = infix_to_postfix(s, r);
    printf("\n");

    for (int i = 0; i < len; i++) {
        printf("%c", r[i]);
    }

    int result;
    printf("후위표기식은 82/3-32*+\n");
    result = eval((char*)"82/3-32*+");
    printf("결과값은 %d\n", result);

    printf("후위표기식은 %s\n", r);
    result = eval(r);
    printf("결과값은 %d\n", result);

    return 0;

	return 0;
}