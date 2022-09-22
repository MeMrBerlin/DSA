#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int stack[SIZE];
int tos=-1;

void push(int item)
{
    if(tos==SIZE)
    {
        printf("\nOverflow Error");
    }
    else
    {
        tos++;
        stack[tos]=item;
    }
}

int pop()
{
    if(tos==-1)
    {
        printf("\nStack underflow Error!!");
        return -1;
    }
    else
    {
        int t=stack[tos];
        tos--;
        return t;
    }
}
void display()
{
    for(int i=tos;i>=0;i--)
    {
        printf("\n%d\n",stack[i]);
    }
}

int main()
{
    int n;
    printf("\nSTACK\n");
    while(1)
    {

        printf("Press 1 to Push\n2to pop\n3 to display\n4 to exit\n");
        scanf("%d",&n);
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
                printf("\nWrong Choice!!");
        }
    }
    return 0;
}