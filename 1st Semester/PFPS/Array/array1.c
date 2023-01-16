//array 
//w a p to enter ten integer no in any & print them
// Harinandan paswan
//Roll no- 22403
#include <stdio.h>
int main()
{
    int num[10],i;
    printf("Enter the 10 integer number\n");

    for(i=0; i<10; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("you array is as follows\n");
    for(i=0; i<10; i++)
    {
        printf("%d\t", num[i]);
    }
    
    return 0;
}