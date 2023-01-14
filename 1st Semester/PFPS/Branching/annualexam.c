//W a p to print student annual examination in m subject
// Harinandan paswan
//Roll no- 22403
#define FIRST 360
#define SECOND 240
#include <stdio.h>
int main()
{
    int n, m, i, j, roll_number, marks, total;
    printf("Enter number of students and subjects\n");
    scanf("%d %d", &n, &m);
    printf("\n");
    for(i=1; i<=n; ++i)
    {
        printf("Enter roll_number  :  ");
        scanf("%d", roll_number);
        total = 0;
        printf("\nEnter marks of %d subjects for Roll No %d\n", m, roll_number);
        for(j=1; j<=m; j++)
        {
            scanf("%d",&marks);
            total = total + marks;
            
        }
        printf("TOTAL MARKS = %d", total);
        if(total >= FIRST)
        printf("(First Division)\n\n");
        else if(total >= SECOND)
        printf("Second Division\n\n");
        else
        printf("(*** F A I L ***)\n\n");
        
    }

    
    return 0;
}