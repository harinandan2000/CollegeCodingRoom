#include <stdio.h>
int main()
{
// Declaration of variables
int i, j;
// Declaration of 1-D integral array
int arr[10];
// Declaration of 2-D array
int disp[2][3];
// Insert the elements of 1-D array
printf("Enter the elements of 1 - D array\n");
for (i = 0; i < 10; i++)
{
printf("Enter element %d: ", i);
scanf("%d, ", &arr[i]);
}
// Display the elements of an 1-D array
printf("\nThe 1 - D array elements are: ");
for (i = 0; i < 10; i++)
{
printf("%d, ", arr[i]);
}
// Insert the elements of 2-D array
printf("\n\nEnter the elements of 2 - D array\n");
for (int i = 0; i < 2; i++)
{
for (j = 0; j < 3; j++)
{
printf("Enter value for disp[%d][%d]: ", i, j);
scanf("%d", &disp[i][j]);
}
}
// Display the elements of an 2 - D array
printf("\nTwo Dimensional array elements\n");
for (i = 0; i < 2; i++)
{
for (j = 0; j < 3; j++)
{
printf("%d ", disp[i][j]);
}
printf("\n");
}
return 0;
}