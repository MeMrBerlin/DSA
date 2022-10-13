#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left_link;
    struct node *right_link;
};

typedef struct node nd;

nd *createNode(int element)
{
    nd *t = (nd *)malloc(sizeof(nd));
    t->data = element;
    t->left_link = NULL;
    t->right_link = NULL;
    return t;
}

nd *insertNewNodeAtFirst(nd *head)
{
    nd *p;
    p = (nd *)malloc(sizeof(nd));
    printf("ENTER NEW DATA: ");
    scanf("%d", &p->data);
    p->right_link = head;
    p->left_link = NULL;
    return p;
}

nd *insertNewNodeAtLast(nd *head)
{
    nd *p;
    p = (nd *)malloc(sizeof(nd));
    nd *q;
    q = head;
    while (q->right_link != NULL)
    {
        q = q->right_link;
    }
    printf("ENTER NEW DATA: ");
    scanf("%d", &p->data);
    q->right_link = p;
    p->left_link = q;
    p->right_link = NULL;
    return head;
}

int main()
{
    nd *head;
    head = NULL;
    nd *creatNode;
    int ch, element;
    while (1)
    {
        printf("\nENTER \n 1 FOR INSERT: \n 2 FOR DISPLAY: \n 3 FOR INSERT NEW NODE AT FIRST: \n 4 FOR INSERT NEW NODE AT THE END:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("ENTER THE VALUE: ");
            scanf("%d", &element);
            nd *temp = createNode(element);
            if (head == NULL)
            {
                temp->left_link = head;
                temp->right_link = NULL;
                head = temp;
            }
            else
            {
                temp->right_link = head;
                temp->left_link = NULL;
                head = temp;
            }

            break;

        case 2:
            temp = head;
            printf("\n");
            printf("Start->");

            while (temp != NULL)
            {
                printf("<-%d->", temp->data);
                temp = temp->right_link;
            }
            printf("Null");
            printf("\n");
            break;

        case 3:
            head = insertNewNodeAtFirst(head);
            break;

        case 4:
            head = insertNewNodeAtLast(head);
            break;

        default:
            printf("Invalid intput!");
            break;
        }
    }

    return 0;
}
