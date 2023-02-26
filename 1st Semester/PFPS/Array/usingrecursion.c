// Harinandan paswan
// Roll-No-22403
// W A P to find the factroial of a given number using RECURSION
#include <stdio.h>
int calfact(int n);
int main()
{
    int num, fact;
    printf("Enter the number to be find the factorial\n");
    scanf("%d", &num);
    fact = calfact(num);
    printf("The factorial is : %d", fact);
    return 0;
}
int calfact(int n)
{
    if (n == 1)
        return 1;
    else
        return (n * calfact(n - 1));
}