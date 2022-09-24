#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int size;
    printf("Enter the size you want: ");
    scanf("%d", &size);

    int *arr;
    arr = (int *)malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
    {
        printf("Enter elements in position no %d: \n", i + 1);
        scanf("%d", (arr + i));
    }

    int n;
    printf("ENTER 1 FOR ASCENDING ORDER OR 2 FOR DESCENDING ORDER\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        for (int i = 0; i < size; i++)
        {
            int minIndex = i;
            for (int j = (i + 1); j < size; j++)
            {
                if (arr[minIndex] > arr[j])
                {
                    swap(arr + j, arr + minIndex);
                }
            }
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d\n", *(arr + i));
        }
        break;
    case 2:
        for (int i = 0; i < size; i++)
        {
            int minIndex = i;
            for (int j = (i + 1); j < size; j++)
            {
                if (arr[minIndex] < arr[j])
                {
                    swap(arr + j, arr + minIndex);
                }
            }
        }
        for (int i = 0; i < size; i++)
        {
            printf("%d\n", *(arr + i));
        }
    default:
        printf("Wrong intput!");
        break;
    }
    return 0;
}