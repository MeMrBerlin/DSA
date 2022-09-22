#include <stdio.h>
#include <stdlib.h>
//function to swap two elements
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

int main()
{
    int size;
    printf("ENTER THE SIZE YOU WANT\n: ");
    scanf("%d", &size);
    int *arr;
    arr = (int *)malloc(size*sizeof(int));
    for (int i=0; i<size; i++)
    {
        printf("Enter the elements in %d position\n", i+1);
        scanf("%d", (arr+i));
    }
    //code for selection Sort
    for(int i=0;i<size;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                swap(arr+j,arr+minIndex);
            }
        }
    }
    //printing the sorted Array
    printf("\n-----------------After Sorting Data Array-------------------------------------\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *(arr+i));
    }
    


    return 0;
}
