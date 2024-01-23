// Name- Harinandan Paswan
// Reg no- 22105128034
// Date- 
// AIM:- W A P function overloading

#include <iostream>
using namespace std;

int add(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 7, num2 = 4;
    int k = 5;
    int a[5] = {1, 2, 3, 4, 5};

    cout << "sum of integers using add: " << add(num1, num2) << endl;
    cout << "sum of array using add: " << add(a, k);
    ;
    return 0;
}