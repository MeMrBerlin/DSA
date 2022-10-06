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
    printf("\n");
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
    printf("\n");
    printf("Enter new value for insert at Last: ");
    scanf("%d", &ptr->data);
    temp->next = ptr;
    ptr->next = NULL;
    return head;
}

nd *insertNemNodeAtAnyIndex(nd *head, int index)
{
    nd *ptr, *temp;
    ptr = (nd *)malloc(sizeof(nd));
    temp = head;
    int i = 0;
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }
    printf("\n");
    printf("Enter new value for insert at %d position: ", i + 1);
    scanf("%d", &ptr->data);
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}

int main()
{
    nd *head;
    head = NULL;
    nd *newNode, *temp;
    int ch,i,count=0;
    while (1)
    {
        printf("ENTER\n 1 FOR INPUT: \n 2 FOR DISPLAY: \n 3 FOR INSERT NEW NODE AT FIRST:\n 4 FOR INSERT NODE AT LAST: \n 5 FOR SEE THE LENGTH OF LIST: \n 6 FOR INSERT NODE IN BETWEEN NODES: ");
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
                count++;
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

        case 5:
            printf("%d\n", count);
            break;

        case 6:
            printf("\n");
            printf("Enter the position of node: ");
            scanf("%d", &i);
            head = insertNemNodeAtAnyIndex(head, i);
            break;

        default:
            printf("Wrong intput\n");
        }
    }

    return 0;
}