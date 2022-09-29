#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int items[SIZE], front = -1, rear = -1; 

void enQueue(int element)

{
    if (rear == SIZE - 1)
    {
        printf("\nQueuue is full");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        items[rear] = element;
        printf("Data Insertion successful");
    }
}

int deQueue()

{
    if (front == -1)
    {
        printf("\nQueue Underflow!!");
        return -1;
    }
    else
    {
        int temp = items[front];
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
        return temp;
    }
}

void display()

{
    if (rear == -1)
    {
        printf("\nQueuue is empty");
    }
    else
    {
        int i;
        printf("\nQuueue elements are as follows:\n");
        for (int i = front; i <= rear; i++)
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
        printf("ENTER 1 FOR ENQUEUE:\n 2 FOR DEQUEUE:\n 3 FOR DISPLAY:\n 4 FOR EXIT: \n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            int num;
            printf("Enter the number: ");
            scanf("%d", &num);
            enQueue(num);
            break;

        case 2:
            deQueue();
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