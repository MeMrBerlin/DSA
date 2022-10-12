// Algorithm_Merge(A,p,q,r)
// {
//     n1=q-p+1//size of the 1st Array
//     n2=r-q//size of the 2nd Array
//     //let L[1...n1+1] and R[1...n2+1] be two new arrays copies all the elemenents from p and q
//     for(i=1 to n1)
//     {
//         L[i]=A[p+i-1]
//     }
//     for(j=1 to n2)
//     {
//         R[j]=A[q+j]
//     }
//     L[n1+1]=9999;
//     R[n2+1]=9999;

//     int m=1,n=1;

//     for(k=p to r)  // k = p theke r kno korlam?
//     {
//         if(L[m]<=R[n])
//         {
//             A[k]=L[n]
//             m++;
//         }
//         else
//         {
//             A[k]=R[n];
//             n++;
//         }
//     }
// }
// merge_sort(A,p,r)
// {
//     if (p<r)
//     {
//         q=(p+r)/2;
//         merge_sort(A,p,q)
//         merge_sort(A,q+1,r)
//         merge(A.p,q,r)
//     }
// }

#include <stdio.h>
void merge(int arr[], int firstIndex, int middleIndex, int lastIndex)
{
    int n1, n2;
    n1 = middleIndex - firstIndex + 1;
    n2 = lastIndex - middleIndex;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[firstIndex + i];
    }

    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[middleIndex + j + 1];
    }

    int m = 0, n = 0, k = firstIndex;
    while (m < n1 && n < n2)
    {
        if (L[m] <= R[n])
        {
            arr[k] = L[m];
            m++;
        }
        else
        {
            arr[k] = R[n];
            n++;
        }

        k++;
    }
    while (m < n1)
    {
        arr[k] = L[m];
        m++;
        k++;
    }
    while (n < n2)
    {
        arr[k] = R[n];
        n++;
        k++;
    }
}

void merge_sort(int arr[], int leftIndex, int rightIndex)
{
    if (leftIndex < rightIndex)
    {
        int middleIndex = (int)(leftIndex + rightIndex) / 2;
        merge_sort(arr, leftIndex, middleIndex);
        merge_sort(arr, middleIndex + 1, rightIndex);
        merge(arr, leftIndex, middleIndex, rightIndex);
    }
}

int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter elements in position %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    merge_sort(array, 0, 4);
    printf("Sorted array is: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }
    
    return 0;
}