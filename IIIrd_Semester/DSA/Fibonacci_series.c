// Name- Harinandan paswan
// Reg no- 22105128034
// Date-14/12/2023
// w a p to fibonacci series

#include <stdio.h>

// int fib(int n);

int fib(int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}
int main()
{
    int num, i;
    printf("Enter the value of last term of fibonacci series\n");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        printf("%d, ", fib(i));
    }
    return 0;
}

// int fib(int n)
// {
//     if (n == 0)
//         return 0;

//     else if (n == 1)
//         return 1;
//     else
//         return (fib(n - 1) + fib(n - 2));
// }