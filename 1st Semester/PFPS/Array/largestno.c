//wap to find the largest of in number store in array
//
#include <stdio.h>
int main()
{
    int num[20], i, n, large;
    printf("Enter the number of elements :\n");
    scanf("%d", &n);
    printf("Enter the %d elements in array\n", n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0; i<=n; i++)
    {
        if(large<=num[i])
        large = num[n];
    }
    printf("The largest value is %d ", large);
    
    return 0;
}