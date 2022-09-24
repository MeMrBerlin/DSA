#include <stdio.h>
#define SIZE 5
int stack[SIZE];
int tos = -1;

void pop()
{
  if (tos == -1)
  {
    printf("Stack is underflow!");
  }
  else
  {
    int t = stack[tos];
    tos--;
    return t;
  }
}

int main()
{
  int *stack;
  stack = (int *)malloc(SIZE * sizeof(int));
  for (int i = 0; i < SIZE; i++)
  {
    printf("Enter elements in position no. %d: ", i + 1);
    scanf("%d", (stack + i));
  }
  pop();

  return 0;
}