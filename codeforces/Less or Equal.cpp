// https://codeforces.com/problemset/problem/977/C

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
    map<int, int> mp;
    int n, k, x;
    long long c = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> x;
        mp[x]++;
    }
    mp[1]++;
    if (k == 0 && mp[1] == 1) {
        cout << 1 << endl;
    }
    else {
        mp[1]--;
        for (pair<int, int> a : mp) {
            c += a.second;
            mp[a.first] = 0;
            if (c == k) {
                cout << a.first << endl;
                return 0;
            }
            else if (c > k) break;
        }
        cout << -1 << endl;
    }
    
    return 0;
}
