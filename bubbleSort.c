#include <stdio.h>
#include <stdlib.h>

int main()
{

    int size;
    printf("Enter the size you want: ");
    scanf("%d", &size);
    int *arr;
    arr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Enter the elements in %d position: ", i + 1);
        scanf("%d", (arr + i));
    }
    // code for bubble sort
    for (int i = 0; i < size; i++) // controlling the no of phases
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n-------------------------------Sorted Araay-------------------------\n");
    // print the sorted Array here
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr + i));
    }

    return 0;
}