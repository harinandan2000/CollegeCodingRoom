//wap to print the table of seven for while
//harinandan paswan
//roll no- 22403
#include <stdio.h>
int main()
{
    
    int i = 0;
    printf("print to the table for seven\n");
    while(i<=70)
    {
        i++;
        if(i%7 != 0)
        continue;
        printf("%d\n", i);
    
    }

    return 0;

}