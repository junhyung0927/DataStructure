#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    ListNode *head = nullptr;
    //ù ��° ��� ����
    head = insert_first(head, 10);
    head = insert(head, head, 20);
    head = insert(head, head, 30);
    head = insert(head, head->link, 30);

    print_list(head);

    int count = 0;

    while(head->link != nullptr){
        head = head->link;
        count++;
    }

    printf("count: %d\n", count);

    print_list(head);

    head = insert_first(head, 40);
    print_list(head);

    head = delete_first(head);
    print_list(head);

    head = delete_mid(head, head);
    print_list(head);

    ListNode* t = search_list(head, 30);
    if( t == NULL)
        printf("��尡 �����ϴ�.\n");
    else
        printf("�� ã�ҽ��ϴ�.\n");
    return 0;
}

