#include <iostream>
using namespace std;

int main()
{
    int x = 2;
    // int y = (x=x+5, x*5);
    int y = x + --x + ++x;

    cout << y;
    return 0;
}