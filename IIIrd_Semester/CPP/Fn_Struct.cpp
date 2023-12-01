// Name-Harinandan Paswan
// Reg no-22105128034

#include <iostream>
using namespace std;
// Define a Structures to represent feet and inch
struct distance
{
    int feet;
    int inch;
};

// Function Add to feet and inch
struct distance add(struct distance d1, struct distance d2)
{
    struct distance d3;
    d3.feet = 0;
    d3.inch = 0;
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;
    if (d3.inch >= 12)
    {
        d3.inch = d3.inch - 12;
        d3.feet = d3.feet + 1;
    }
    return d3;
}

int main()
{
    struct distance d1, d2, d3;

    cout << "Enter the value of Feet1 :- " << endl;
    cin >> d1.feet;
    cout << "Enter the valu of Feet2 :- " << endl;
    cin >> d2.feet;

    cout << "Enter the value of Inch1 :- " << endl;
    cin >> d1.inch;
    cout << "Enter the value of Inch2 :- " << endl;
    cin >> d2.inch;

    d3 = add(d1, d2);

    cout << "The total distance is " << d3.feet << " feet and " << d3.inch << " inch";

    return 0;
}
