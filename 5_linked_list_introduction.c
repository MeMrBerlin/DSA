#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link; // self referential pointer
};

typedef struct node nd; // makes sortcut of "node" as "nd"

nd *createNode(int elememnt)
{
    nd *temp;
    temp = (nd *)malloc(sizeof(nd));
    // (* temp).data=element;
    temp->data = elememnt;
    return temp;
}

int main()
{
    nd *start;
    nd *t;
    start->link = NULL;

    t = createNode(5);
    t->link = start->link;
    start->data = t->data;
    start->link = t;

    t = createNode(9);
    t->link = start->link;
    start->link = t;

    t = createNode(7);
    t->link = start->link;
    start->link = t;

    // display the linked list
    nd *x = start;
    printf("\n---------------------------------------------Linked List-------------------------------------------------\n");
    printf("start->");
    while (x->link != NULL)
    {
        printf("%d->", x->data);
        x = x->link;
    }
    printf("NULL\n");
    return 0;
}

