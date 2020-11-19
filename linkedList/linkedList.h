#pragma once

typedef int element;

typedef struct ListNode{
    element data; //데이터 필드
    struct ListNode* link; //링크 필드
} ListNode;

ListNode *insert_first(ListNode *head, element value);
ListNode *insert(ListNode *head, ListNode *pre, element value);
ListNode *delete_first(ListNode *head);
ListNode *delete_mid(ListNode *head, ListNode *pre);
void print_list(ListNode *head);
ListNode* search_list(ListNode *head, element x);