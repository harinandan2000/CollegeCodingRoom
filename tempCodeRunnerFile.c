/*To create a C program to show the working principle of Arithmetic operator, Unary operator, 
Logical operator, Relational operator, Bit-wise operator and Assignment operator.*/
//
//

// Header files of C
#include <stdio.h>
// Main function of the program
int main()
{
// Declaration and initialization of variables
int a = 9, b = 4, c;
int a1 = 5, b1 = 5, c1 = 10, result;
int f = 1, a2 = 3;
// Working of Arithmetic operators
printf("\nWorking of Arithmetic operators\n");
c = a + b;
printf("a+b = %d \n", c);
c = a - b;
printf("a-b = %d \n", c);
c = a * b;
printf("a*b = %d \n", c);
c = a / b;
printf("a/b = %d \n", c);
c = a % b;
printf("a%%b = %d \n", c);
// Working of Unary operators
printf("\nWorking of Unary operators\n");
printf("++a = %d \n", ++a);
printf("--b = %d \n", --b);
// Working of Logical operators
printf("\nWorking of Logical operators\n1 is True and 0 is False\n");
result = (a1 == b1) && (c1 > b1);
printf("(a1==b1)&&(c1>b1) is %d\n", result);
result = (a1 == b1) && (c1 < b1);
printf("(a1==b1)&&(c1<b1) is %d\n", result);
result = (a1 == b1) || (c1 < b1);
printf("(a1==b1)||(c1<b1) is %d\n", result);
result = (a1 == b1) || (c1 > b1);
printf("(a1==b1)||(c1>b1) is %d\n", result);
// Working of Relational operators
printf("\nWorking of Relational operators\n1 is True and 0 is False\n");
printf("%d==%d is %d\n", a1, b1, a1 == b1);
printf("%d>%d is %d\n", a1, b1, a1 > b1);
// Working of Bit-wise operators
printf("\nWorking of Bit-wise operators\n");
printf("%d & %d = %d\n", a, b, a & b);
printf("%d | %d = %d\n", a, b, a | b);
printf("%d ^ %d = %d\n", a, b, a ^ b);
// Working of Assignment operators
printf("\nWorking of Assignment operators\n");
printf("a2 = %d\n\n", a2);
printf("f = %d\n", f);
f += a2;
printf("f += a2 = %d\n\n", f);
printf("f = %d\n", f);
f -= a2;
printf("f -= a2 = %d\n\n", f);
printf("f = %d\n", f);
f *= a2;
printf("f *= a2 = %d\n\n", f);
printf("f = %d\n", f);
f /= a2;
printf("f /= a2 = %d\n\n", f);
printf("f = %d\n", f);
f %= a2;
printf("f %%= a2 = %d\n\n", f);
return 0;
}