#pragma once

#define MAX_LIST_SIZE 100 	// ����Ʈ�� �ִ�ũ��

typedef int element;			// �׸��� ����
typedef struct {
	element array[MAX_LIST_SIZE];	  // �迭 ����
	int size;		  // ���� ����Ʈ�� ����� �׸���� ����
} ArrayListType;
void init(ArrayListType* L);
int is_empty(ArrayListType* L);
int is_full(ArrayListType* L);
element get_entry(ArrayListType* L, int pos);
void print_list(ArrayListType* L);
void insert_last(ArrayListType* L, element item);
void insert(ArrayListType* L, int pos, element item);
element delete_list(ArrayListType* L, int pos);
