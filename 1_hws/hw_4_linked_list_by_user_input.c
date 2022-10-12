#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

int main()
{
    nd *head;
    head = NULL;
    nd *newNode, *temp;
    int ch;
    int count = 0;
    while (1)
    {
        printf("Enter\n 1 For New Node:\n 2 For Print the list:\n 3 For print the count: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            newNode = (nd *)malloc(sizeof(nd));
            printf("Enter the data: ");
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
            printf("%d\n", count);
            break;

        default:
            printf("Wrong intput!");
        }
    }

    return 0;
}