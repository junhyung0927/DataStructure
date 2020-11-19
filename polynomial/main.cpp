#include <stdio.h>
#include <stdlib.h>

#include "polylist.h"

int main(void)
{
	ListType* list1, * list2, * list3;

	// ���� ����Ʈ ��� ����
	list1 = create();
	list2 = create();
	list3 = create();

	// ���׽� 1�� ���� 
	insert_last(list1, 3, 12);
	insert_last(list1, 2, 8);
	insert_last(list1, 1, 0);

	// ���׽� 2�� ���� 
	insert_last(list2, 8, 12);
	insert_last(list2, -3, 10);
	insert_last(list2, 10, 6);

	poly_print(list1);
	poly_print(list2);

	// ���׽� 3 = ���׽� 1 + ���׽� 2
	poly_add(list1, list2, list3);
	poly_print(list3);

	free(list1); free(list2); free(list3);
}