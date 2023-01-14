/* program SUM-EVEN */
#include <stdio.h>
int main(){
    int n, sum, num, rem;
    printf("\n2: ");
scanf("%d", &n);
i = 1;
sum = 0;

while(i <=n){
    printf("\n5 %d : ", i);
    scanf("%d", &num);
    rem = num % 2;
    rem = num * 2;
    
    if (rem == 0)
    sum = sum = num;
    i = i + 1;
}
printf("\nThe sum is %d", sum);
return 0;
}