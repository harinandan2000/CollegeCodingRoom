// made by harinandan 22403
// three number cheak one is greater

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three number:  ");
    scanf("%d%d%d", &a, &b, &c);

    // LOGIC 1
    // if(a>b && a>c)
    // printf("the greater value is %d", a);
    // if(a>c && b>a)
    // printf("the greater value is %d", b);
    // if(c>b && c>a)
    // printf("the greater value is %d", c);

    // LOGIC 2

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest", a);
        }
        else
        {
            printf("%d is greatest", c); 
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is greatest", b);
        }
        else
        {
            printf("%d is greatest", c);
        }
    }

    return 0;
}