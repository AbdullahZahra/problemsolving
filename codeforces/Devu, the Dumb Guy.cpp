// https://codeforces.com/problemset/problem/439/B

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
    long long n, x;
    cin >> n >> x;
    int* a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    long long counter = 0;
    for (int i = 0; i < n; i++) {
        counter += (x * a[i]);
        if (x > 1) x--;
    }
    cout << counter << endl;
    return 0;
}