// https://codeforces.com/problemset/problem/16/B

#include <iostream>
#include <map>
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
    int n, m, x, y;
    long long counter = 0;
    map<long long, long long, greater<>> mp;

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        mp[y] += x;
    }

    for (pair<long long, long long> x : mp) {
        if (n >= x.second) counter += (x.first * x.second);
        else {
            counter += (n * x.first);
            break;
        }
        n -= x.second;
    }
    cout << counter << endl;
    return 0;
}