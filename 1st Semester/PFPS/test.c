#include <stdio.h>
// #include <math.h>

// int main()
// {
//     printf("Hello World");
//     return 0;
// }


// int main()
// {
//     char ch='Z';

//     printf("%d\n", ch);

//     return 0;
// }

// int main()
// {
//     // int x=4, y, z;
//     float a=5, b=2;
//     int c,d;
//     c=a/b;
//     d=c/2;
    

//     // printf("%d%d%d", x, y, z);
//     printf("%d", d);
//     return 0;
// }


int main() {

  int x[5] = {1, 2, 3, 4, 5};
  int* ptr;

  // ptr is assigned the address of the third element
  ptr = &x[2]; 

  printf("*ptr = %d \n", *ptr);   // 3
  printf("*(ptr+1) = %d \n", *(ptr+1)); // 4
  printf("*(ptr-1) = %d", *(ptr-1));  // 2

  return 0;
}