#include <stdio.h>
#include <ctype.h>

char stack[100];
int tos = -1;

void push(char x)
{
    tos++;
    stack[tos] = x;
}

char pop()
{
    if (tos == -1)
    {
        printf("STACK IS UNDER FLOW!");
        return -1;
    }
    else
    {
        int t;
        t = stack[tos];
        tos--;
        return t;
    }
}

int priority(char x)
{
    if (x == ")")
    {
        return 0;
    }
    if (x == '+' || x == '-')
    {
        return 1;
    }
    if (x == '*' || x == '/')
    {
        return 2;
    }
    return 0;
}

int main()
{
    char exp[100];
    printf("ENTER THE EXPRESSION: ");
    scanf("%s", &exp);

    char *e, x;
    e = exp;

    strrev(exp);

    while (*e != '\0')
    {
        if (isalnum(*e))
        {
            printf("%c", *e);
        }
        else if (*e == ')')
        {
            push(*e);
        }
        else if (*e == '(')
        {
            while (*e != ')')
            {
                pop();
                printf("%c", x);
            }
        }
        else
        {
            while (priority(stack[tos]) >= priority(*e))
            {
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }
    while (tos != -1)
    {
        printf("%c ", pop());
    }
    return 0;
}