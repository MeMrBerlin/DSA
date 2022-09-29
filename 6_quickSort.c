#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partion(int A[], int p, int r)
{
    int x = A[r];
    int i = p - 1;
    for (int j = p; j <= (r - 1); j++)
    {
        if (A[j] <= x)
        {
            i = i + 1;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[r]);
    return i + 1;
}

void quickSort(int A[], int p, int r)
{
    // for (int i = p; i <= r; i++)
    // {
    //     printf("%d\n", A[i]);
    // }

    if (p < r)
    {
        int q = partion(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int main()
{
    int size;
    printf("ENTER THE SIZE YOU WANT\n: ");
    scanf("%d", &size);
    int *arr;
    arr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Enter the elements in %d position\n", i + 1);
        scanf("%d", (arr + i));
    }

    quickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr + i));
    }

    return 0;
}