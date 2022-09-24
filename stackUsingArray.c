#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];  // array name is delceared as "stack"
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
        int t = stack[tos]; // first of all, put out that value and store it in some constant,then print that constant
        tos--;
        return t;
        //printf("%d", &t);
    }
}
void peek()
{
    if (tos == -1)
    {
        printf("Top is empty!");
    }
    else
    {
        printf("Top most element is: ");
        printf("%d", stack[tos]);
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

        printf("\nPress 1 to Push\n2 to Pop\n3 to Display\n4 to see peek value\n5 to exit\n");
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
            peek();
            break;

        case 5:
            exit(1);
            break;

        default:
            printf("\nWrong Choice!!\n");
        }
    }
    return 0;
}