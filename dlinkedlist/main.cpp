#include <stdio.h>
#include <stdlib.h>

#include "dlinkedlist.h"

// ���� ���� ����Ʈ �׽�Ʈ ���α׷�
int main(void)
{
	DListNode* head = (DListNode*)malloc(sizeof(DListNode));
	init(head);
	printf("�߰� �ܰ�\n");
	for (int i = 0; i < 5; i++) {
		// ��� ����� �����ʿ� ����
		dinsert(head, i);
//		print_dlist(head);
        print_rdlist(head);
	}

	printf("\n���� �ܰ�\n");
	for (int i = 0; i < 5; i++) {
//		print_dlist(head);
		print_rdlist(head);
		ddelete(head, head->rlink);
	}
	free(head);
	return 0;
}
