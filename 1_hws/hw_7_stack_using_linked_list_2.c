#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

nd *tos = NULL;
int count = 0;

// nd *creatNode(int element)
// {
//     nd *t;
//     t = (nd *)malloc(sizeof(nd));
//     t->next = NULL;
//     return t;
// }

void push(int element)
{
    nd *p;
    p = (nd *)malloc(sizeof(nd));
    p->data = element;
    p->next = tos;
    tos = p;
    count++;
}

int pop()
{
    if (count == 0)
    {
        printf("\nSTACK IS UNDER FLOW!");
        return 0;
    }
    else
    {
        nd *p;
        p = tos;
        tos = p->next;
        int t = p->data;
        free(p);
        count--;
        printf("popped element:%d\n", t);
        return t;
    }
}

void display()
{
    nd *t;
    t = tos;
    while (t != NULL)
    {
        printf("\n%d", t->data);
        t = t->next;
    }
}

int main()
{
    int ch,num;

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