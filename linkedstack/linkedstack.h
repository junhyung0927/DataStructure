#pragma once

typedef int element;
typedef struct StackNode {
	element data;
	struct StackNode* link;
} StackNode;

typedef struct {
	StackNode* top;
} LinkedStackType;

void init(LinkedStackType* s);
int is_empty(LinkedStackType* s);
int is_full(LinkedStackType* s);
void push(LinkedStackType* s, element item);
void print_stack(LinkedStackType* s);
element pop(LinkedStackType* s);
element peek(LinkedStackType* s);
