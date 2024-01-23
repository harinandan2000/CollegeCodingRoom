// Name- Harinandan Paswan
// Reg no- 22105128034
// Date- 15/12/2023
// AIM:- W A P to enter the weight in Pound and convert in K.G. Using Inline_Function

#include<iostream>

using namespace std;

inline float lbstokg(float pound);
inline float lbstokg(float pound)
{
    return 0.435*pound;
}

 int main()
{
    float lbs;
    cout<<"Enter the weight i pound"<<endl;
    cin>>lbs;
    cout<<"The weight in kg is  " <<lbstokg(lbs);


    return 0;
}
// inline float lbstokg(float pound)
// {
//     return 0.435*pound;
// }