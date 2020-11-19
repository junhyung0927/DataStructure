#pragma once

typedef int element;
typedef struct DListNode {	// 이중연결 노드 타입
	element data;
	struct DListNode* llink;
	struct DListNode* rlink;
} DListNode;

void init(DListNode* phead);
void print_dlist(DListNode* phead);
void print_rdlist(DListNode* phead);
void dinsert(DListNode* before, element data);
void ddelete(DListNode* head, DListNode* removed);
