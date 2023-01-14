//harinandan paswan 22403
//
#include <stdio.h>
int main()
{
    int i,j;

    printf("your formate is as follows\n");
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%4d", i);
        }
        printf("\n");
    }

    return 0;
}