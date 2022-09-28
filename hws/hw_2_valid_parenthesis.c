#include <stdio.h>
#include <string.h>
char stack[100];
int top = -1;

void push(char ch)
{
    top++;
    stack[top] = ch;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is underflow!");
        return 1;
    }
    else
    {
        int t = stack[top];
        top--;
        return t;
    }
}

int main()
{
    char input[100];
    puts("Enter expression: ");
    gets(input);
    
    for (int i = 0; i < strlen(input); i++)
    {

        if (input[i] == '(')
        {
            push('(');
        }
        else if (input[i] == ')')
        {
            int t = pop();
            if (t == 1)
            {
                printf("\nThe expression is wrong!");
                break;
            }
        }
    }

    return 0;
}