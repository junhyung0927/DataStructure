#pragma once

typedef struct ListNode { // ��� Ÿ��
	int coef;
	int expon;
	struct ListNode* link;
} ListNode;

// ���� ����Ʈ ���
typedef struct ListType { // ����Ʈ ��� Ÿ��
	int size;
	ListNode* head;
	ListNode* tail;
} ListType;

ListType* create();
void insert_last(ListType* plist, int coef, int expon);
void poly_print(ListType* plist);
void poly_add(ListType* plist1, ListType* plist2, ListType* plist3);
