//WAP for arithmetic integer days into months and days
// Harinandan kumar 22403
#include <stdio.h>
int main()
{
    int months, days;
    printf("please enter your days\n");
    scanf("%d", &days);

    months = days/30;
    days = days%30;
    printf("months = %d days = %d", months, days);

    return 0;
}