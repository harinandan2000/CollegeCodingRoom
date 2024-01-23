// Nmae- Harinandan Paswan
// Reg No- 22105128034
// Date- 
// Task - W A P to find the sum of array element using function

#include<iostream>
using namespace std;

int sum(int array[], int n1); //Function deceleration & Actual paramiter
int sum(int array[], int n1) //Function header & Formal paramiter
{
    int add = 0;
    for(int i=0; i<n1; i++)
    {
        add = add + array[i];

    }
    return add;
}
int main()
{
    int num[20], n, result;
    cout<<"Enter the size of array"<< endl;
    cin>>n;
    cout<<"Enter the " <<n <<" Element in array"<< endl;
    for(int i=0; i<n; i++)
    {
        cin>>num[i];

    }
    result = sum(num, n); //Call statement
    cout<<"The sum of array element is : " <<result;


    return 0;
}