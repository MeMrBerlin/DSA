#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int items[SIZE], front = -1, rear = SIZE-1;

void push(int element)

{
    if (front == SIZE - 1)
    {
        printf("\nQueuue is full");
    }
    else
    {
        front++;
        items[front] = element;
        printf("Data Insertion successful");
    }
}

int pop()

{
    if (front == -1)
    {
        printf("\nQueue Underflow!!");
        return -1;
    }
    else
    {
        int temp = items[front];
        front--;
        return temp;
    }
}

void display()

{
    if (front == -1)
    {
        printf("\nQueuue is empty");
    }
    else
    {
        int i;
        printf("\nQuueue elements are as follows:\n");
        for (int i = 0; i <= front; i++)
        {
            printf("%d\t", items[i]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    while (1)
    {
        printf("ENTER 1 FOR push:\n 2 FOR pop:\n 3 FOR DISPLAY:\n 4 FOR EXIT: \n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            int num;
            printf("Enter the number: ");
            scanf("%d", &num);
            push(num);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(1);

        default:
            printf("Wrong choise!");
        }
    }

    return 0;
}