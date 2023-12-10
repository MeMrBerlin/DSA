#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node nd;

nd *front = NULL;
nd *rear = NULL;
int count = 0;

void enqueue(int x) // enter node at end
{
    nd *newNode;
    newNode = (nd *)malloc(sizeof(nd));
    newNode->data = x;
    newNode->next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    count++;
}

int dequeue() // delete node from first
{
    if (count == 0)
    {
        printf("QUEUE IS UNDERFLOW!");
    }
    else
    {
        nd *p = front;
        p = (nd *)malloc(sizeof(nd));
        printf("DELETED VALUE IS: %d", front->data);
        front = front->next;
        free(p);
        count--;
    }
}

int main()
{
    int n, num;

    while (1)
    {
        printf("\n ENTER \n 1 FOR ENQUEUE \n 2 FOR PRINT: \n 3 FOR DEQUEUE: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:

            printf("ENTER A NUMBER: ");
            scanf("%d", &num);
            enqueue(num);
            break;

        case 2:
            nd *temp;
            if (front == NULL && rear == NULL)
            {
                printf("QUEUE IS EMPTY!");
            }
            else
            {
                temp = front;
                while (temp != NULL)
                {
                    printf("%d\t", temp->data);
                    temp = temp->next;
                }
            }
            break;

        case 3:
            dequeue();
            break;

        default:
            printf("WRONG INTPUT!\n");
            break;
        }
    }
    return 0;
}