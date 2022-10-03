#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

nd *insertNewNodeAtFirst(nd *head)
{
    nd *ptr;
    ptr = (nd *)malloc(sizeof(nd));
    printf("Enter new value for insert at first: ");
    scanf("%d", &ptr->data);
    ptr->next = head;
    return ptr;
}

nd *insertNewNodeAtLast(nd *head)
{
    nd *ptr, *temp;
    ptr = (nd *)malloc(sizeof(nd));
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    printf("Enter new value for insert at Last: ");
    scanf("%d", &ptr->data);
    temp->next = ptr;
    ptr->next = NULL;
    return head;
}

int main()
{
    nd *head;
    head = NULL;
    nd *newNode, *temp;
    int ch;
    while (1)
    {
        printf("ENTER\n 1 FOR INPUT: \n 2 FOR DISPLAY: \n 3 FOR INSERT NEW NODE AT FIRST:\n 4 FOR INSERT NODE AT LAST: ");
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
            head = insertNewNodeAtFirst(head);
            break;

        case 4:
            head = insertNewNodeAtLast(head);
            break;

        default:
            printf("Wrong intput\n");
        }
    }

    return 0;
}