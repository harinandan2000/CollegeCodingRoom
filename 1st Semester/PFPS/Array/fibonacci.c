#include <stdio.h>

int fib(int n);

int main()
{
    int terms;
    printf("Enter number of terms to be printed: ");
    scanf("%d", &terms);
    for(int i = 1; i<=terms; i++)
        printf("%d, ", fib(i));
    return 0;
}

int fib(int n)
{
    if (n == 1 || n == 2)
        return (n-1);
    else
        return (fib(n-1) + fib(n-2));
}