#include <stdio.h>
#include <stdlib.h>

#include "dlinkedlist.h"

// 이중 연결 리스트 테스트 프로그램
int main(void)
{
	DListNode* head = (DListNode*)malloc(sizeof(DListNode));
	init(head);
	printf("추가 단계\n");
	for (int i = 0; i < 5; i++) {
		// 헤드 노드의 오른쪽에 삽입
		dinsert(head, i);
//		print_dlist(head);
        print_rdlist(head);
	}

	printf("\n삭제 단계\n");
	for (int i = 0; i < 5; i++) {
//		print_dlist(head);
		print_rdlist(head);
		ddelete(head, head->rlink);
	}
	free(head);
	return 0;
}
