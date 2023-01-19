//Wap to print 2d matrix in array
//Name- Harinandan paswan
//Roll-no- 22403

#include <stdio.h>
int main() 
{
    int num1[5][5], i, j, r, c;
    printf("Enter the row and column of matrix\n");
    scanf("%d%d", &r, &c);
    printf("Enter the %d element in matrix\n", r*c);
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            scanf("%d", &num1[i][j]);
        }
    }
    printf("Your matrix is as follow\n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("%4d", num1[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}