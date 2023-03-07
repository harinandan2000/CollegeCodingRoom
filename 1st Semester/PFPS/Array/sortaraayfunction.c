// Name-Harinandan kumar paswan
// Roll no- 22403
//  with argument with return for array

#include <stdio.h>
// int calculate(int x[], int y);
// {
//     int sum = 0, i;
//     for (i = 0; i < y; i++)
//     {
//         sum = sum + x[i];
//     }
//     return sum;
// }

int main()
{
    int num[20], i, n;
    int Total;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the %d Element in array num\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[20]);
    }
    Total = calculate(num, n);
    printf("The sum of array element is: %d", Total);

    return 0;
}

int calculate(int x[], int y)
{
    int sum = 0, i;
    for (i = 0; i < y; i++)
    {
        sum = sum + x[i];
    }

    return sum;
}
