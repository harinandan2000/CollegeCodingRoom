

// Fibonacci Series using Recursion
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter the fibonacci series number :- " << endl;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        cout << " , " << fib(i);
    }
    getchar();
    return 0;
}
