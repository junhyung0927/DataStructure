#include "linkedstack.h"
#include <stdio.h>

// ÁÖ ÇÔ¼ö
int main(void)
{
	LinkedStackType s;
	init(&s);
	push(&s, 1); print_stack(&s);
	push(&s, 2); print_stack(&s);
	push(&s, 3); print_stack(&s);
	pop(&s); print_stack(&s);
	pop(&s); print_stack(&s);
	pop(&s); print_stack(&s);
	return 0;
}