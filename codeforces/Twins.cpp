// https://codeforces.com/problemset/problem/160/A

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
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
    int n, sR = 0, sL = 0, c=0;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sR += a[i];
    }
    
    sort(a, a + n);

    for (int i = n - 1; sL<=sR; i--) {
        sL += a[i];
        sR -= a[i];
        c++;
    }

    cout << c << endl;
    return 0;
}