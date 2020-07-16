/*
A. Say Hello With C++

Given a name S. Print "Hello, (name)" without parentheses.

Input
Only one line containing a string S.

Output
Print "Hello, " without quotes, then print name.

*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    string S;
    cin >> S;
    cout << "Hello, " << S << endl;
    return 0;
}
