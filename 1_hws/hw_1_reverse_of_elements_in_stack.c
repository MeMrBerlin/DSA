#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int stack1[SIZE] = {20, 54, 78, 96, 10};
int stack2[SIZE];
int top1 = 4;
int top2 = -1;

void push(int element)
{
  if (top2 == SIZE)
  {
    printf("Stack is overflow!");
  }
  else
  {
    top2++;
    stack2[top2] = element;
  }
}

int pop()
{
  if (top1 == -1)
  {
    printf("Stack is underflow!");
  }
  else
  {
    int t = stack1[top1];
    top1--;
    return t;
  }
}

int main()
{
  for (int i = 0; i < SIZE; i++)
  {
    push(pop());
  }

  for (int i = 0; i < SIZE; i++)
  {
    printf("%d\n", stack2[i]);
  }

  return 0;
}