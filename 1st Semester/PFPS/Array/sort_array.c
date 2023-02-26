// Harinandan paswan
// Roll No- 22403
// W A P to sort array element for bouble sort
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter the total number at array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d element in array\n", n);
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in under stored array\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d ,", arr[i]);
    }
    for (i = 0; i <= (n - 1); i++) // pass
    {
        for (j = 0; j <= (n - 1); j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        
    }
    for(i=0; i<=n; i++)
    {
        printf("%4d ", arr[i]);
    }
    return 0;
}