#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define TRUE 1
#define FALSE 0

// Defining the structure of stack type
struct Stack
{
    int top;
    int array[MAXSIZE];
} st;

// initialization of top variable
void initialize()
{
    st.top = -1;
}
// checking whether the stack is full or not
int isFull()
{
    if (st.top > MAXSIZE - 1)
        return TRUE;
    else
        return FALSE;
}
// checking whether the stack is empty or not
int isEmpty()
{
    if (st.top == -1)
        return TRUE;
    else
        return FALSE;
}

// function to push the element into the stack.
void push(int num)
{
    if (isFull())
        printf("Stack is Full...\n");
    else
    {
        st.top++;
        st.array[st.top] = num;
    }
}

// function to pop the element from the stack
int pop()
{
    if (isEmpty())
        printf("Stack is Empty...\n");
    else
    {
        // int t;
        // t = st.top;
        // st.top--;
        // return t;
        st.top--;
        return st.array[st.top + 1];
    }
}

// function to print the elements of stack.
void printStack()
{
    // condition to check whether the stack is empty or not.
    if (!isEmpty())
    {
        int temp = pop();
        printStack();
        printf(" %d ", temp);
        push(temp);
    }
}
// function to insert the element at the bottom of the stack.
void insertAtBottom(int item)
{
    if (isEmpty())
    {
        push(item);
    }
    else
    {
        int top = pop();
        insertAtBottom(item);
        push(top);
    }
}
// function to reverse the order of the stack.
void reverse()
{
    if (!isEmpty())
    {
        int top = pop();
        reverse();
        insertAtBottom(top);
    }
}

int getSize()
{
    return st.top + 1;
}
// Definition of main() method
int main()
{
    // initialize(st);    // calling initialize() method
    // push(1);     // calling push() method
    // push(2);   // calling push() method
    // push(3);    // calling push() method
    // push(4);    // calling push() method
    // push(5);    // calling push() method
    // printf("Original Stack\n");
    // printStack();
    // reverse();
    // printf("\nReversed Stack\n");
    // printStack();  // calling printStack() method
    
    int num;
    while (1)
    {
        printf("\n ENTER \n 1 FOR PUSH \n 2 FOR DISPLAY \n 3 FOR REVERSE THE STACK: ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            int n;
            printf("ENTER THE NUMBER: ");
            scanf("%d", &n);
            push(n);
            break;

        case 2:
            printf("\n");
            printStack();
            break;

        case 3:
            printf("\n");
            reverse();
            printStack();
            break;

        default:
            printf("INVALID INTPUT!");
            break;
        }
    }

    return 0;
}