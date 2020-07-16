// C. Simple Calculator
/*
Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

Input
Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

Output
Print 3 lines that contain the following in the same order:

" X + Y = summation result" without quotes.
" X * Y = multiplication result" without quotes.
" X - Y = subtraction result" without quotes.
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long x,y;
    cin >> x >> y;
    cout << x << " + " << y << " = " << x+y <<endl;
    cout << x << " * " << y << " = " << x*y <<endl;
    cout << x << " - " << y << " = " << x-y <<endl;
    return 0;
}
