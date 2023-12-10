#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int n)
{
    if (top == SIZE)
    {
        printf("STACK IS FULL!");
    }
    else
    {
        top++;
        stack[top] = n;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("STACK IS UNDERFLOW!");
    }
    else
    {
        int t;
        stack[top] = t;
        top--;
        return t;
    }
}

// void insert_at_bottom(int x)
// {
//     if (SIZE == 0)
//     {
//         push(x);
//     }
//     else
//     {
//         int y = stack[top];
//         pop();
//         insert_at_bottom(x);
//         push(y);
//     }
// }

// void reverse()
// {
//     if (SIZE > 0)
//     {
//         int x = stack[top];
//         pop();
//         reverse();
//         insert_at_bottom(x);
//     }
// }

int reverse(int top)
{
    if (top > -1)
    {
        return stack[top - 1];
    }
    else
    {
        top--;
        return reverse(top);
    }
}

int main()
{
    // push(1);
    // push(2);
    // push(3);
    // push(4);

    // reverse();

    // while (SIZE != 0)
    // {
    //     printf("%d", stack[top]);
    //     pop();
    // }

    int n;
    printf("\nSTACK\n");
    while (1)
    {

        printf("\n Press \n 1 to Push \n 2 to Pop \n 3 to Display \n 4 to reverse the stack: \n");
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
            for (int i = top; i > -1; i--)
            {
                printf("\n%d\n", stack[i]);
            }
            break;

        case 4:
            for (int i = top; i > -1; i--)
            {
                printf("\n%d\n", reverse(i));
            }
            break;

        default:
            printf("\nWrong Choice!!\n");
            break;
        }
    }
    return 0;
}