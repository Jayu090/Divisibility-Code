#include <iostream>
using namespace std;
int main()
{
    /* Q1. Write a program to output whether a number is divisible by both 2 and 3
       or divisible by only one of them. */

    int n;
    cout << "Enter any number: ";
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "The given number is divisible by both 2 and 3..!";
    }
    else if (n % 2 == 0)
    {
        cout << "The given number is divisible by 2..!";
    }
    else if (n % 3 == 0)
    {
        cout << "The given number is divisible by 3..!";
    }
    else
    {
        cout << "The given number is neither divisible by 2 nor by 3..!";
    }
    cout << endl;

    /* Q2. Input a number n and tell whether it is equal to, less than or more than 10. */

    int i;
    cout << "Enter any number: ";
    cin >> i;

    if (i < 10)
    {
        cout << "The given number is less than 10..!";
    }
    else if (i > 10)
    {
        cout << "The given number is more than 10..!";
    }
    else
    {
        cout << "The given number is equal to 10..!";
    }
    return 0;
}
