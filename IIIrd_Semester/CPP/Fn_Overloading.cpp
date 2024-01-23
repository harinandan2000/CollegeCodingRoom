// Namre- Harinandan Paswan
// Reg no- 22105128034
// Date- 
// WAP to calculate the area of rectangle, triangle and squre using function_overloading

#include <iostream>
using namespace std;

// int calculate(int s)
// {
//     return s*s;
// }

// int calculate(int a, int b)
// {
//     return a*b;
// }

// float calculate(float a, float b)
// {
//     return (a*b)/2;
// }

int calculate(int s);
int calculate(int a, int b);
float calculate(float a, float b);

int calculate(int s)
{
    return s * s;
}

int calculate(int a, int b)
{
    return a * b;
}

float calculate(float a, float b)
{
    return (a * b) / 2;
}

int main()
{
    int x, y, result;
    float c, d;
    float total;
    cout << "Enter the side of squre:-" << endl;
    cin >> x;
    result = calculate(x);
    cout << "The area of squre is :- " << result << endl;
    cout << "Enter the value of L and W " << endl;
    cin >> x >> y;
    result = calculate(x, y);
    cout << "Area of rectangle is :- " << result << endl;
    cout << "Enter the height and base  " << endl;
    cin >> c >> d;
    total = calculate(c, d);
    cout << "Area of triangle is :- " << total << endl;

    return 0;
}