#pragma once

typedef struct ListNode { // 노드 타입
	int coef;
	int expon;
	struct ListNode* link;
} ListNode;

// 연결 리스트 헤더
typedef struct ListType { // 리스트 헤더 타입
	int size;
	ListNode* head;
	ListNode* tail;
} ListType;

ListType* create();
void insert_last(ListType* plist, int coef, int expon);
void poly_print(ListType* plist);
void poly_add(ListType* plist1, ListType* plist2, ListType* plist3);
