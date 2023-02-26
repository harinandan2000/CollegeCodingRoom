// Harinandan paswan
// Roll-No-22403
// W A P to GENERATE FIBONACCE SERIES up to n term
#include <stdio.h>

int fib(int n);
int main()
{
    int num, i;
    printf("Enter the value of last term of fibonacce series\n");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        printf("%d, ", fib(i));
    }
    return 0;
}

int fib(int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}

// #include <stdio.h>

// int fib(int n);

// int main()
// {
//     int terms;
//     printf("Enter number of terms to be printed: ");
//     scanf("%d", &terms);
//     for(int i = 1; i<=terms; i++)
//         printf("%d, ", fib(i));
//     return 0;
// }

// int fib(int n)
// {
//     if (n == 1 || n == 2)
//         return (n-1);
//     else
//         return (fib(n-1) + fib(n-2));
// }