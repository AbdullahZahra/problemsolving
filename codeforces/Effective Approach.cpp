// https://codeforces.com/problemset/problem/227/B

#include <iostream>
#include <set>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stdio.h>
using namespace std;
#define endl '\n'
int freq[100009];
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}
int main()
{
    fast();
    int n, m, x;
    long long vasya = 0, petya = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x] = i + 1;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> x;
        vasya += freq[x];
        petya += ((n - freq[x]) + 1);
    }
    cout << vasya << " " << petya << endl;
    return 0;
}