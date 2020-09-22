// https://codeforces.com/problemset/problem/699/A

#include <iostream>
#include <algorithm>
#include <cmath>
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
    int n, output = 1000000000;
    string s;
    cin >> n >> s;
    
    int* a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'R' && s[i + 1] == 'L') output = min(output, (a[i + 1] - a[i]) / 2);
    }

    if (output == 1000000000) cout << -1 << endl;
    else cout << output << endl;
    return 0;
}