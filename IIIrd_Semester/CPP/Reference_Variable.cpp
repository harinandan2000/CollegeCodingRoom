// Name- Harinandan Paswan
// Reg no- 22105128034
// Date- 15/12/2023
// AIM:- W A P to singulate Reference Variable indacting the same Memory Location

#include <iostream>
using namespace std;

int main()
{
    int num;
    num = 50;
    int &y = num;
    cout<< "The vale of num" << num;
    cout<<endl << "The value of y" << y;
    num++;
    cout<< "The vale of num" << num;
    cout<<endl<< "The value of y" << y;

    cout<<endl<<"The address of num is "<<&num;
    cout<<endl<<"The address of y is "<<&y;
    return 0;
}