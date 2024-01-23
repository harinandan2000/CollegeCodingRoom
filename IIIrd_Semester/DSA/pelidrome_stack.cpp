// // // Name- Harinandan Paswan
// // // Reg no- 22105128034
// // //  Date- 11/01/2023
// // // WAP of Palidrome using stack
// // #include <iostream>
// // using namespace std;
// // #define max 10
// // class stack
// // {
// // private:
// //     int top, length, count;
// //     char[max], str[max];
// //     void pushdata(char);
// //     char popdata();

// // public:
// //     stack()
// //         top = -1 length = 0;
// //     count 0;
// // };

// // int main()
// // {

// //     return 0;
// // }

// // C++ implementation of the approach
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// // Function that returns true
// // if string is a palindrome
// bool isPalindrome(string s)
// {
//     int length = s.size();

//     // Creating a Stack
//     stack<char> st;

//     // Finding the mid
//     int i, mid = length / 2;

//     for (i = 0; i < mid; i++)
//     {
//         st.push(s[i]);
//     }

//     // Checking if the length of the string
//     // is odd, if odd then neglect the
//     // middle character
//     if (length % 2 != 0)
//     {
//         i++;
//     }

//     char ele;
//     // While not the end of the string
//     while (s[i] != '\0')
//     {
//         ele = st.top();
//         st.pop();

//         // If the characters differ then the
//         // given string is not a palindrome
//         if (ele != s[i])
//             return false;
//         i++;
//     }

//     return true;
// }

// // Driver code
// int main()
// {
//     string s = "madam";

//     if (isPalindrome(s))
//     {
//         cout << "Yes";
//     }
//     else
//     {
//         cout << "No";
//     }

//     return 0;
// }

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

class stack
{
    char s[50];   
    int top;

public:
    stack()
    {
        top = -1;
    }
    void push(char val);
    char pop();
    int isfull();
    int isempty();
};

class str
{
    char inputstr[50], revstr[50];
    stack stobj;

public:
    void readstring();
    void revstring();
    void convertstring();
    void checkpalindrome();
};

int stack::isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int stack::isfull()
{
    if (top == 49)
        return 1;
    else
        return 0;
}

void stack::push(char val)
{
    if (!isfull())
    {
        top++;
        s[top] = val;
    }
    else
        cout << endl
             << "stack overflows/full......" << endl;
}

char stack::pop()
{
    char val = '\0';
    if (!isempty())
    {
        val = s[top];
        top--;
    }
    else
        cout << endl
             << "stack underflow/empty......" << endl;
    return val;
}

void str::readstring()
{
    cout << "\nEnter string  ";
    gets(inputstr);
    cout << "\nYou entered:-> " << inputstr;
}

void str::revstring()
{
    int i;
    char ch;
    for (i = 0; inputstr[i] != '\0'; i++)
    {
        stobj.push(inputstr[i]);
    }
    i = 0;
    cout << "\n\nAfter reverse your string:-> ";
    while (!stobj.isempty())
    {
        ch = stobj.pop();
        cout << ch;
        revstr[i] = ch;
        i++;
    }
    cout << endl;
}

void str::convertstring()
{
    int i, j = 0;
    char tempstr[50];
    for (i = 0; inputstr[i] != '\0'; i++)
    {
        if (inputstr[i] >= 97 && inputstr[i] <= 122)
        {
            tempstr[j] = inputstr[i];
            j++;
        }
        else if (inputstr[i] >= 65 && inputstr[i] <= 90)
        {
            tempstr[j] = inputstr[i] + 32;
            j++;
        }
    }
    tempstr[j] = '\0';
    strcpy(inputstr, tempstr);
    cout << "\n\nYour converted string:-> " << inputstr << endl;
}

void str::checkpalindrome()
{
    cout << "\n\n";
    cout << "**********************************************************************************";
    cout << "\nCheck for palindrome" << endl;

    readstring();
    convertstring();
    for (int i = 0; i < 49; i++)
        revstr[i] = 0;
    revstring();

    cout << inputstr << endl;
    cout << revstr << endl;

    if (strcmp(inputstr, revstr) == 0)
        cout << "\n\nYour string is PALINDROME";
    else
        cout << "\n\nYour string is NOT PALINDROME";
}

int main()
{
    str obj;
    obj.readstring();
    obj.convertstring();
    obj.revstring();
    obj.checkpalindrome();
    return 0;
}
