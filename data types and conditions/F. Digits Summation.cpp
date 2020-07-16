// F. Digits Summation

/*
Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

Output
Print the answer of the problem.
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include <iostream>
 
using namespace std;
 
int main()
{
    long long n, m;
    cin >> n >> m;
    cout << ( n%10 ) + ( m%10 ) << endl;
    return 0;
}
