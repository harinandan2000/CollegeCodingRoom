// Name- Harinandan Paswan
// Reg no- 22105128034
// Date- 15/12/2023
// AIM:- W A P to swipe two value using PASS BY VALUE & PASS BY REFERENCE & PASS BY POINTER

#include <iostream>
using namespace std;

void swapv(int a, int b);
void swapr(int &a, int &b);
void swapp(int *a, int *b);

void swapr(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}

void swapp(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

void swapv(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}

int main()
{
    int packet1=300;
    int packet2=350;

    cout<<"The vale of packet1 is :-  "<<packet1<<endl;
    cout<<"The vale of packet2 is :-  "<<packet2<<endl;

    swapr(packet1, packet2);

    cout<<"The vale of packet1 is :-  "<<packet1<<endl;
    cout<<"The vale of packet2 is :-  "<<packet2<<endl;

    swapp(&packet1, &packet2);

    cout<<"The vale of packet1 is :-  "<<packet1<<endl;
    cout<<"The vale of packet2 is :-  "<<packet2<<endl;

    swapv(packet1, packet2);

    cout<<"The vale of packet1 is :-  "<<packet1<<endl;
    cout<<"The vale of packet2 is :-  "<<packet2<<endl;

    return 0;
}

// void swapr(int &a, int &b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;

// }

// void swapp(int *a, int *b)
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;

// }

// void swapv(int &a, int &b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;

// }

