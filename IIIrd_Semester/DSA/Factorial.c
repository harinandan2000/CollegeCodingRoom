// Name- Harinandan paswan
// Reg no- 22105128034
// Date- 14/12/2023

#include <stdio.h>
#include <conio.h>

int fact(int a)
{
    if (a <= 0)
        return (-1);
    if (a == 0)
        return (1);
    else
    {
        return (a * fact(a - 1));
    }
}
int main()
{
    int fact(int);
    int i, f, num;
    printf("Enter any number: ");
    scanf("%d", &num);
    f = fact(num);
    printf("Factorial: %d", f);
    return 0;
}
// int fact(int a)
// {
//     if (a <= 0)
//         return (-1);
//     if (a == 0)
//         return (1);
//     else
//     {
//         return (a * fact(a - 1));
//     }
// }