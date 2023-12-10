// sorting linked list with help of bubble sort

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

nd *sortByData(nd *head)
{
    nd *p, *q, *end;
    int temp;
    for (end = NULL; end != head; end = p)
    {
        for (p = head; p->next != end; p = p->next)
        {
            q = p->next;
            if (p->data > q->data)
            {
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
        }
    }
}

int main()
{

    int ch;
    nd *head = NULL;
    nd *creatNode, *temp;
    while (1)
    {
        printf("\n ENTER \n 1 FOR INPUT: \n 2 FOR DISPLAY: \n 3 FOR SORTING: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            creatNode = (nd *)malloc(sizeof(nd));
            creatNode->next = NULL;
            printf("ENTER THE VALUE: ");
            scanf("%d", &creatNode->data);

            if (head == NULL)
            {
                head = temp = creatNode;
            }
            else
            {
                temp->next = creatNode;
                temp = creatNode;
            }
            break;

        case 2:
            temp = head;
            printf("\n");
            printf("Start->");
            while (temp != NULL)
            {
                printf("%d->", temp->data);
                temp = temp->next;
            }
            printf("Null\n");
            printf("\n");
            break;

        case 3:
            head = sortByData(head);
            temp = head;
            printf("\n");
            printf("Start->");
            while (temp != NULL)
            {
                printf("%d->", temp->data);
                temp = temp->next;
            }
            printf("Null\n");
            printf("\n");
            break;

        default:
            printf("WRONG INTPUT!");
            break;
        }
    }

    return 0;
}