#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

ListNode *insert_first(ListNode *head, element value) {
    ListNode *p = (ListNode *) malloc(sizeof(ListNode));
    p->data = value;
    p->link = head;

    head = p;
    return head;
}

ListNode *insert(ListNode *head, ListNode *pre, element value) {
    ListNode *p = (ListNode *) malloc(sizeof(ListNode));

    p->data = value;
    p->link = pre->link;
    pre->link = p;

    return head;
}

ListNode *delete_first(ListNode *head) {
    ListNode *removed;
    if (head == NULL) return NULL;
    removed = head;
    head = removed->link;
    free(removed);
    return head;
}

ListNode *delete_mid(ListNode *head, ListNode *pre) {
    ListNode *removed;
    removed = pre->link;
    pre->link = removed->link;
    free(removed);
    return head;
}

ListNode* search_list(ListNode *head, element x)
{
    ListNode *p = head;

    while (p != NULL){
        if( p-> data==x) return p;
        p = p->link;
    }
    return NULL;
}

ListNode* concat_list(ListNode *head1, ListNode *head2)
{
    if(head1 == NULL) return head2;
    else if(head2 == NULL) return head2;
    else{
        ListNode *p;
        p = head1;
        while(p->link != NULL)
            p=p->link;
        p->link = head2;
        return head1;
    }
}

ListNode* reverse(ListNode *head)
{
    ListNode *p, *q, *r;

    p=head;
    q=NULL;
    while (p!=NULL){
        r = q;


    }
}
void print_list(ListNode *head)
{
    for(ListNode *p = head; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL \n");
}

