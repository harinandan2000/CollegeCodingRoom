//Harinandan 20403
//calculate factorial
#include <stdio.h>
int main()
{
    int num, i, fact = 1;
    printf("Enter the value to be find the factorial\n ");
    scanf("%d", & num);
    for(i=1; i<=num; i=i+1)
    {
        fact = fact*i;
    }
    {
        printf("The factorial is: %d", fact);
    }
    return 0;
    
}