// https://codeforces.com/problemset/problem/405/A

#include <iostream>
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
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i == n - 1)cout << endl;
        else cout << " ";
    }
    return 0;
}