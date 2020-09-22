// https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <set>
#include <string>
#include <algorithm>
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
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++) {
        if (tolower(s1[i]) < tolower(s2[i])) {
            cout << -1 << endl;
            return 0;
        }
        else if (tolower(s1[i]) > tolower(s2[i])) {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;

}