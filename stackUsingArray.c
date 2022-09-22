#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];
int tos = -1; // tos aka: top of stock

void push(int item)
{
    if (tos == SIZE)
    {
        printf("\nOverflow Error\n");
    }
    else
    {
        tos++;
        stack[tos] = item;
    }
}

int pop()
{
    if (tos == -1)
    {
        printf("\nStack underflow Error!!\n");
        return -1;
    }
    else
    {
        int t = stack[tos];
        tos--;
        return t;
    }
}
void display()
{
    for (int i = tos; i >= 0; i--)
    {
        printf("\n%d\n", stack[i]);
    }
}

int main()
{
    int n;
    printf("\nSTACK\n");
    while (1)
    {

        printf("\nPress 1 to Push\n2 to Pop\n3 to Display\n4 to exit\n");
        scanf("%d", &n);
        printf("\t");
        switch (n)
        {
        case 1:
            int num;
            printf("Enter the number: ");
            scanf("%d", &num);
            push(num);
            break;

        case 2:
            printf("%d", pop());
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);
            break;

        default:
            printf("\nWrong Choice!!\n");
        }
    }
    return 0;
}