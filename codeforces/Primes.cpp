// https://codeforces.com/gym/102267/problem/B

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
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
    int n;
    cin >> n;
    if (n % 2) {
        if (n - 2 > 2) {
            for (int i = 2; i <= sqrt(n - 2); i++)
                if ((n - 2) % i == 0) {
                    cout << -1 << endl;
                    return 0;
                }
            cout << 2 << " " << n - 2 << endl;
        }
        else cout << -1 << endl;
    }
    else {
        vector<int> v;
        v.push_back(3);
        for (int i = 5; i <= n; i += 2) {
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) break;
                else if (j == (int)sqrt(i)) v.push_back(i);
            }
        }
        for (int i = 0; i < v.size() && v[i] <= n / 2; i++) {
            if (find(v.begin(), v.end(), n - v[i]) != v.end()) {
                cout << v[i] << " " << n - v[i] << endl;
                return 0;
            }
        }
        cout << -1 << endl;
    }
    return 0;
}
