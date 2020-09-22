// https://codeforces.com/problemset/problem/746/A

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
    int a, b, c;
    long long rec;
    cin >> a >> b >> c;
    rec = min({ a, b / 2, c / 4 });
    cout << rec + rec * 2 + rec * 4 << endl;
    return 0;
}