#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

void creatNode(nd *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
}

nd *insertNodeAtFirst(nd *head, int data)
{
    nd *ptr;
    ptr = (nd *)malloc(sizeof(nd));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

nd *insertNodeAtEnd(nd *head, int data)
{
    nd *ptr;
    ptr = (nd *)malloc(sizeof(nd));
    nd *p = head;
    ptr->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

nd *insertAtIndex(nd *head, int data, int index)
{
    nd *ptr;
    ptr = (nd *)malloc(sizeof(nd));
    nd *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

int main()
{

    nd *head;
    nd *second;
    nd *third;
    nd *forth;

    head = (nd *)malloc(sizeof(nd));
    second = (nd *)malloc(sizeof(nd));
    third = (nd *)malloc(sizeof(nd));
    forth = (nd *)malloc(sizeof(nd));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 20;
    third->next = forth;

    forth->data = 54;
    forth->next = NULL;

    printf("\n");
    printf("head->");
    head = insertNodeAtFirst(head, 18);
    head = insertAtIndex(head, 13, 1);
    head = insertNodeAtEnd(head, 69);
    creatNode(head);
    printf("Null\n");
    printf("\n");

    return 0;
}