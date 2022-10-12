// Partion Algo
// For insertion sort

// procedure_partion(A,p,r) 
// p points first element and r points last element
// {
//     x=A[r]
//     i=p-1
//     for(j=p to r-1)
//     {
//         if(A[j]<=x)
//         {
//             i=i+1
//             exchange(A[i],A[j])
//         }
//     }
//     exchange(A[i+1],A[r])
//     return i+1
// }

// QuickSort(A,p,r)
// {
//     if(p<r)
//     {
//         q=procedure_partion(A,p,r)
//         QuickSort(A,p,q-1)
//         QuickSort(A,q+1,r)
//     }
// }

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partion(int A[], int p, int r) // p = firstindex , r = lastindex
{
    int x = A[r]; // we are considering last element as a pivot
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

    printf("\n");
    
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr + i));
    }

    return 0;
}