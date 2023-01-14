//harinandan paswan 22403
#include<stdio.h>
#define     N   2000
#define     A   5
int main()
{
    int a;
    a = A;
    while(a<=N)
    {
        printf("%d\n", a);
        a *= a;
    }
    return 0;
}