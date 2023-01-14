//cone 
#include <stdio.h> 
#include <math.h>
int main()
{
    float volume, area, slant_height, r, h, l;
    printf("Enter value for r:  ");
    scanf("%f", &r);
    printf("Enter value for h:  ");
    scanf("%f", &h);
    printf("enter value for l:  ");
    scanf("%f", &l);
    volume=(3.14*r*r*h)/3;
    slant_height=sqrt((r*r)+(h*h));
    area=3.14*r*(l+r);
    printf("volume of the given cone is %f\n", volume);
    printf("area of the given cone is %f\n", area);
    printf("slant height of the given cone is %f\n", slant_height);
    return 0;
}