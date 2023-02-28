//Name- Harinandan paswan
//Roll No- 22403
//W A P to print HCF using Function

#include <stdio.h>
int hcf(int a, int b)
{
    if (b != 0)
    return hcf(b, a%b);
    else
    return a;
    
}
int main()
{
int a, b;
printf("Enter the number of a :\n");
scanf("%d",&a);
printf("Enter the number of b :\n");
scanf("%d",&b);
if(a<b)
printf("The HCF is : %d", hcf(a, b));
else
printf("The HCF is : %d", hcf(b, a));
return 0;

}