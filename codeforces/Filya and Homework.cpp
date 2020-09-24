// https://codeforces.com/problemset/problem/714/B

#include <iostream>
#include <map>
#include <algorithm>
#include <iomanip>
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
    int n, x;
    map<int, int> mp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        mp[x]++;
    }

    if(mp.size()<3) cout << "YES\n";
    else if (mp.size() > 3) cout << "NO\n";
    else {
        int c = 0;
        int mn, md, mx;
        for (pair<int, int> x: mp) {
            if (c == 0) { mn = x.first; c++; }
            else if(c==1) { md = x.first; c++; }
            else { mx = x.first; c++; }
        }
        if (md - mn == mx - md) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}