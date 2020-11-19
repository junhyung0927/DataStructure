#pragma once

#define MAX_LIST_SIZE 100 	// 리스트의 최대크기

typedef int element;			// 항목의 정의
typedef struct {
	element array[MAX_LIST_SIZE];	  // 배열 정의
	int size;		  // 현재 리스트에 저장된 항목들의 개수
} ArrayListType;
void init(ArrayListType* L);
int is_empty(ArrayListType* L);
int is_full(ArrayListType* L);
element get_entry(ArrayListType* L, int pos);
void print_list(ArrayListType* L);
void insert_last(ArrayListType* L, element item);
void insert(ArrayListType* L, int pos, element item);
element delete_list(ArrayListType* L, int pos);
