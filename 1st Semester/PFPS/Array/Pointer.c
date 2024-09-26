//Explain pointer arithmetic with the help of suitable diagrams.



#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers; // Initializing the pointer with the base address of the array

    // Pointer arithmetic
    printf("Address of numbers[0]: %p\n", ptr);
    printf("Value at numbers[0]: %d\n", *ptr);

    // Moving to the next element in the array using pointer arithmetic
    ptr++; // Moves to the next integer in the array

    printf("Address of numbers[1]: %p\n", ptr);
    printf("Value at numbers[1]: %d\n", *ptr);

    return 0;
}
