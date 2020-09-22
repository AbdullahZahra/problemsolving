// https://codeforces.com/problemset/problem/66/B

#include <iostream>
#include <cmath>
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
    int n, counter, output = 0;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        counter = 1;
        for (int j = i - 1; j >= 0; j--) {
            if (a[j] <= a[j + 1]) counter++;
            else break;
        }
        for (int j = i + 1; j < n; j++) {
            if (a[j] <= a[j - 1]) counter++;
            else break;
        }
        output = max(output, counter);
    }
    cout << output << endl;
    return 0;
}