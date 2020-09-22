// https://codeforces.com/problemset/problem/456/A

#include <iostream>
#include <map>
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
    int n, x, y, cost = 0;
    map<int, int> mp;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        mp[y] = x;
    }

    for (pair<int, int> x : mp) {
        if (x.second < cost) {
            cout << "Happy Alex\n";
            return 0;
        }
        else cost = max(cost, x.second);
    }
    cout << "Poor Alex\n";
    return 0;
}