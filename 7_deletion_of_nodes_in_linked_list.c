#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

nd *deleteNodeAtFirst(nd *head)
{
    nd *p;
    int t;

    if (head == NULL)
    {
        printf("NO NODE IS PRESENT\n");
        return;
    }
    else
    {
        p = head;
        head = p->next;
        free(p);
        return head;
    }
}

nd *insertNodeAtLast(nd *head)
{
    nd *ptr;
    ptr = (nd *)malloc(sizeof(nd));
    nd *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("ENTER A VALUE: ");
        scanf("%d", temp->data);
        temp = temp->next;
    }
    ptr->next = temp;
    temp->next = NULL;
}

nd *deleteNodeAtLast(nd *head)
{
    nd *p, *q;
    p = head;
    q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    printf("DELETED DATA IS: %d", q->data);
    free(q);
    return head;
}

nd *deleteAnyIndex(nd *head, int index)
{
    
    printf("POSITION = %d\t", index);
    nd *p, *q;
    p = head;
    q = head->next;
    int count = 1;
    while (count < index - 1)
    {
        // printf("count=%d prev->data=%d current data=%d\n",count,p->data,q->data);
        p = p->next;
        q = q->next;
        count++;
    }
    p->next = q->next;
    free(q);
    return head;
}

int main()
{
    nd *head;
    head = NULL;
    nd *newNode, *temp;
    int ch, i;
    while (1)
    {
        printf("\nENTER\n 1 FOR INPUT: \n 2 FOR DISPLAY: \n 3 DEL FIRST NODE: \n 4 DEL AT LAST: \n 5 FOR DEL ANY INDEX YOU WANT: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:

            newNode = (nd *)malloc(sizeof(nd));
            printf("ENTER A VALUE FOR NODE: ");
            scanf("%d", &newNode->data);
            newNode->next = NULL;

            if (head == NULL)
            {
                head = temp = newNode;
            }
            else
            {
                temp->next = newNode;
                temp = newNode;
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
            head = deleteNodeAtFirst(head);
            break;

        case 4:
            head = deleteNodeAtLast(head);
            break;

        case 5:
            printf("\nENTER ANY INDEX NUMBER: ");
            scanf("%d", &i);
            head = deleteAnyIndex(head, i);
            break;

        default:
            printf("Invalid intput!");
            break;
        }
    }
    return 0;
}