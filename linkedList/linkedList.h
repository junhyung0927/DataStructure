#pragma once

typedef int element;

typedef struct ListNode{
    element data; //������ �ʵ�
    struct ListNode* link; //��ũ �ʵ�
} ListNode;

ListNode *insert_first(ListNode *head, element value);
ListNode *insert(ListNode *head, ListNode *pre, element value);
ListNode *delete_first(ListNode *head);
ListNode *delete_mid(ListNode *head, ListNode *pre);
void print_list(ListNode *head);
ListNode* search_list(ListNode *head, element x);