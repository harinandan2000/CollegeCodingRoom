#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int arr[], int n)
{
    int swapFlag = 0;
    for (int i = 0; i < n-1; i++)
    {
        // printf("\nSTART swapFlag = %d\n", swapFlag);
        // printf("\nIteration number: i = %d\n", i);
        // for (int j = 0; j < n-1-i; j++)
        for (int j = 0; j < n-1; j++)
        {
            swapFlag = 0;
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapFlag = 1;
            }
            // printf("Iteration j = %d: ", j);
            // printArray(arr, n);
        }
        // printf("\nEND swapFlag = %d\n", swapFlag);
        // if (swapFlag == 0)
        //     break;
        
    }
}



int main()
{
    int arr[] = {5, 9, 3, 12, 4, 6, 7};
    int n = 7;

    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);
    printf("\nSorted array: ");
    printArray(arr, n);

    return 0;
}
