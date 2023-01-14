//WAP to calculate the area of trengel if three sides are given
//Harinandan22403
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    a=7.5;
    b=8.5;
    c=6.0;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("colculate the area%f",area);
    return 0;
}