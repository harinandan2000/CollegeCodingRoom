// Wap to calculate simple instrest using function(with agurment no return)
// Harinandan paswan
// roll no- 22403

#include <stdio.h>

int main()
{
    int p, r, t;
    printf("Enter the value of P, R, and T : \n");
    scanf("%d%d%d", &p, &r, &t);
    simple(p,r,t);
    
}
    int simple(int a, int b, int c)
{
    int i;
    i = (a * b * c) / 100;
    printf("The simple interest is : %d", i);

}
