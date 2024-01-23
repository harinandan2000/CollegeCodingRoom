// Namre- Harinandan Paswan
// Reg no- 22105128034
// Date- 04/01/2023
// WAP to semulate copy constructor

#include <iostream>
using namespace std;

class alpha
{
    int data;

public:
    alpha() //---------> Default
    {
        data = 0;
    }
    alpha(int d) //---------> Parameterized
    {
        data = d;
    }
    alpha(alpha &a) //---------> Copy
    {
        data = a.data;
        cout << "The copy constructor called" << endl;
    }
    void display()
    {
        cout << data << endl;
    }
};
int main()
{
    alpha a1(37);
    alpha a2(a1);
    a2.display();
    alpha a3;
    a3 = a1;
    a3.display();

    return 0;
}