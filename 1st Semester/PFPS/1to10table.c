// wap to print 1 to 10 table
//harinandan paswan 22403

#include <stdio.h>
int main()
{
    int i,j;

    printf("your table is as follows\n");
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=40; j++)
        {
            printf("%4d", i*j);
        }
        printf("\n");
    }

    return 0;
}