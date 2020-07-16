// G. Summation from 1 to N

/*
Given a number N. Print the summation of the numbers that is between 1 and N (inclusive).

.∑i=1Ni
Input
Only one line containing a number N (1≤N≤109)
Output
Print the summation of the numbers that are between 1 and N (inclusive).
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

#include <iostream>
 
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    cout << (n*(n+1))/2;
    return 0;
}
