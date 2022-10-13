#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int stack[SIZE];
int top = -1;

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

nd *creatNode(int element)
{
    nd *n;
    n = (nd *)malloc(sizeof(nd));
    n->data = element;
    return n;
}

int push(int element)
{
    if (top == SIZE)
    {
        printf("STACK IS OVERFLOW!");
    }
    else
    {
        top++;
        stack[top] = element;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("\nStack underflow Error!!\n");
        return -1;
    }
    else
    {
        int t = stack[top];
        top--;
        return t;
    }
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("\n%d\n", stack[i]);
    }
}

int main()
{
    nd *head;
    head = NULL;
    int n,num;
    while (1)
    {
        printf("\n ENTER \n 1 FOR INSERT NEW NODE: \n 2 FOR PUSH: \n 3 FOR POP: \n 4 FOR DIPLAY:- ");
        scanf("\t%d", &n);
        switch (n)
        {
        case 1:
            printf("ENTER THE VALUE: ");
            scanf("%d", &num);
            head = creatNode(num);
            break;

        case 2:
            printf("ENTER THE VALUE: ");
            scanf("%d", &num);
            push(creatNode(num));
            break;

        case 3:
            pop();
            break;

        case 4:
            display();
            break;

        default:
            printf("WRONG INTPUT!");
            break;
        }
    }

    return 0;
}