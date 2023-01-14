//harinandan 22403
//
#include <stdio.h>
int main()
{
    int a, sum=0;
    a = 1234;
    while(a>0)
    {
        sum = sum+a%10;
        a=a/10;
    }
    if(sum%3 == 0)
    {
        printf("divisibe by 3");
    }
    else
    {
        printf("not");
    }

    return 0;

}