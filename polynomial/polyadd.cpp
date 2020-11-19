#include <stdio.h>
#include "polylist.h"

// list3 = list1 + list2
void poly_add(ListType* plist1, ListType* plist2, ListType* plist3)
{
	ListNode* a = plist1->head;
	ListNode* b = plist2->head;
	int sum;

	while (a && b) {
		if (a->expon == b->expon) {   // a�� ���� > b�� ����
			sum = a->coef + b->coef;
			if (sum != 0) insert_last(plist3, sum, a->expon);
			a = a->link; b = b->link;
		}
		else if (a->expon > b->expon) {  // a�� ���� == b�� ���� 
			insert_last(plist3, a->coef, a->expon);
			a = a->link;
		}
		else {					// a�� ���� < b�� ����
			insert_last(plist3, b->coef, b->expon);
			b = b->link;
		}
	}

	// a�� b���� �ϳ��� ���� ������ �Ǹ� �����ִ� �׵��� ��� 
	// ��� ���׽����� ����
	for (; a != NULL; a = a->link)
		insert_last(plist3, a->coef, a->expon);
	for (; b != NULL; b = b->link)
		insert_last(plist3, b->coef, b->expon);
}