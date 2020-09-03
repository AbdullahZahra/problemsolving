// https://codeforces.com/gym/102388/problem/D

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cctype>
#include <stdio.h>
using namespace std;
#define endl '\n'
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}
int main()
{
    fast();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (char& x : s) {
            if (islower(x)) {
                if (x + 13 > 'z') x = (char)('a' + 12 - ('z' - x));
                else x += 13;
                x = toupper(x);
            }
            else {
                if (x + 13 > 'Z') x = (char)('a' + 12 - ('z' - x));
                else x += 13;
                x = tolower(x);
            }
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
