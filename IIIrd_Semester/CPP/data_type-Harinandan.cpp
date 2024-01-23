// Name-Harinandan paswan
//  Reg-22105128034

#include <iostream>
using namespace std;

int main()
{
    // Basic Data Types
    int integerVar = 42;
    double doubleVar = 3.14;
    char charVar = 'A';
    bool boolVar = true;

    // Derived Data Types
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &integerVar;
    int &ref = integerVar;

    // User-Defined Data Types
    struct Point
    {
        int x;
        int y;
    };

    Point pointVar;
    pointVar.x = 10;
    pointVar.y = 20;

    // Enumeration Type
    enum Color
    {
        RED,
        GREEN,
        BLUE
    };
    Color colorVar = GREEN;

    // Output
    std::cout << "Integer: " << integerVar << std::endl;
    std::cout << "Double: " << doubleVar << std::endl;
    std::cout << "Character: " << charVar << std::endl;
    std::cout << "Boolean: " << std::boolalpha << boolVar << std::endl;

    std::cout << "Array: " << arr[2] << std::endl;
    std::cout << "Pointer: " << *ptr << std::endl;
    std::cout << "Reference: " << ref << std::endl;

    std::cout << "Point: (" << pointVar.x << ", " << pointVar.y << ")" << std::endl;

    std::cout << "Color: " << colorVar << std::endl;

    return 0;
}
