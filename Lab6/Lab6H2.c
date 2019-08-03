/***************************************
* EECS2031Z – Lab 6H2 *
* Author: Bakshi, Tania*
* Email: tbakshi@my.yorku.ca *
* eecs_num: tbakshi *
* York #: 215399462
****************************************/
#include <stdio.h>
#include <stdlib.h>

void insertBegin(int);
struct node {
    int data;
    struct node *next;
};
struct node *head;
main() {
    head = NULL;

    insertBegin(100);     insertBegin(200);
    insertBegin(300);     insertBegin(400);
    insertBegin(500);

    int i;
    struct node *cur;
    for (cur = head; cur != NULL; cur = cur->next)
        printf("%d ", cur->data);
        printf("\n");
}

void insertBegin(int dat) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = dat;
    newNode->next = head;
   head = newNode;
}
