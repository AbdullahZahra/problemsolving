// E. Area of a Circle

/*
Given a number R calculate the area of a circle using the following formula:

Area = π * R 2.

Note: consider π = 3.141592653.

Input
Only one line containing the number R (1  ≤  R  ≤  100).

Output
Print the calculated area, with 9 digits after the decimal point.
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

#include <iostream>
#include <iomanip>
using namespace std;
 
 
int main()
{
    double r;
    cin >> r;
    cout << fixed << setprecision(9) << (3.141592653*r*r) << endl;
    return 0;
}
