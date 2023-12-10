#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *top = 0;

void push(int element)
{
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = element;
    newNode->next = top;
    top = newNode;
}

void display()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("LIST IS EMPTY!");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

void pop()
{
    struct node *temp;
    temp = top;
    if (top == NULL)
    {
        printf("STACK IS UNDERFLOW!");
    }
    else
    {
        printf("POPED ELEMENT IS: %d", temp->data);
        top = top->next;
        free(temp);
    }
}
int main()
{
    int ch, num;

    while (1)
    {
        printf("\n ENTER \n 1 FOR PUSH: \n 2 FOR POP: \n 3 FOR DISPLAY: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("ENTER A NUMBER: ");
            scanf("%d", &num);
            push(num);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        default:
            printf("INVALID INTPUT!");
            break;
        }
    }
    return 0;
}