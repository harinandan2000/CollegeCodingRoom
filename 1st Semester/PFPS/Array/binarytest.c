//BInary 

#include <stdio.h>

int binarySearch(int *arr, int size, int item)
{
    int lr = 0, up = size;
    while (lr <= up)
    {
        int mid = (lr + up) / 2;
        if (arr[mid] == item)
            return mid;
        else if (arr[mid] < item)
            lr = mid + 1;
        else
            up = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {10, 15, 20, 25, 30};
    int size = 5, item;
    printf("Enter item to be searched: ");
    scanf("%d", &item);

    int result = binarySearch(arr, size, item);

    if (result < 0)
        printf("Element not FOUND!");
    else
        printf("%d found at index %d", item, result);

    return 0;
}