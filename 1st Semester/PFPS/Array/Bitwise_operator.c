

// C Program to demonstrate use of bitwise operators
// #include <stdio.h>
// int main()
// {
// 	// a = 12(00001100), b = 25(00011001)
// 	unsigned char a = 12, b = 25;

// 	// The result is 00001000
// 	printf("Bitwise AND operator :- a = %d, b = %d\n", a, b);
// 	printf("Bitwise AND operator :- a&b = %d\n", a & b);

// 	// The result is 00011101
//     printf("Bitwise OR operator :- a = %d, b = %d\n", a, b);
// 	printf("Bitwise OR operator :-  a|b = %d\n", a | b);

// 	// The result is 00010101
//     printf("Bitwise XOR operator :- a = %d, b = %d\n", a, b);
// 	printf("Bitwise XOR operator :-  a^b = %d\n", a ^ b);

// 	// The result is 11111010
// 	// printf("~a = %d\n", a = ~a);

// 	// The result is 00010010
//     printf("Bitwise Left Shift operator :- a = %d, b = %d\n", a, b);
// 	printf("Bitwise Left Shift operator :-  b<<1 = %d\n", b << 1);

// 	// The result is 00000100
// 	// printf("Bitwise Right Shift operator :-  b>>1 = %d\n", b >> 1);

// 	return 0;
// }


#include <stdio.h>

int main() {
    // Bitwise AND (&)
    int a = 12;   // Binary: 1100
    int b = 25;   // Binary: 11001
    int resultAND = a & b;
    printf("Bitwise AND: %d\n", resultAND);

    // Bitwise OR (|)
    int resultOR = a | b;
    printf("Bitwise OR: %d\n", resultOR);

    // Bitwise XOR (^)
    int resultXOR = a ^ b;
    printf("Bitwise XOR: %d\n", resultXOR);

    // Bitwise Left Shift (<<)
    int num = 5;   // Binary: 0101
    int shifted = num << 2;
    printf("Bitwise Left Shift: %d\n", shifted);

    return 0;
}
