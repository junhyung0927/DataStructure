#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    char data;
    ListNode *link;
} ListNode;

int count(ListNode *head) {

    ListNode *p = head;
    int count = 0;

//    while (head->link != nullptr) {
//        head = head->link;
//        count++;
//    }

    for ( ; p->link == NULL; p=p->link) {
        count++;
    }
    printf("count: %d\n", count);

    return count;
}

ListNode *insert(ListNode *head, ListNode *pre, char value) {
    ListNode *p = (ListNode *) malloc(sizeof(ListNode));

    p->data = value;
    p->link = pre->link;
    pre->link = p;

    return head;
}

ListNode *delete_mid(ListNode *head, ListNode *pre) {
    ListNode *removed = pre->link;
    pre->link = removed->link;
    free(removed);
    return head;
}

void print_list(ListNode *head)
{
    for(ListNode *p = head; p != NULL; p = p->link)
        printf("%c->", p->data);
    printf("NULL \n");
}

int main(void) {
    ListNode *head;
    ListNode *p1, *p2;


    head = (ListNode *) malloc(sizeof(ListNode));
    head->data = 'A';
    head->link = head;
    print_list(head);
    head = insert(head, head, 'B');
    head = insert(head, head->link, 'C');

    count(head);

//    while(head){
//        printf("%c -> ", head->data);
//        head = head->link;
//    }


    delete_mid(head, head);


    return 0;
}
