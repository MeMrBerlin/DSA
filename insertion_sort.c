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
    int key;
    // starting of Insertion Sort
    for (int i = 0; i < size; i++)
    {
        key = arr[i];
        int j = i - 1;
        while ((j >= 0) && (arr[j] > key))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // print the array after sorting
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr + i));
    }

    return 0;
}