// https://codeforces.com/gym/102388/problem/B

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
    int t;
    cin >> t;
    while (t--) {
        long long x, y, x0, y0, x1, y1, gcd = 1, step;
        cin >> x0 >> y0 >> x1 >> y1;
        x = abs(x0 - x1);
        y = abs(y0 - y1);
        if (x0 == x1 && y0 == y1) cout << 1 << endl;
        else if (x == 0) cout << y + 1 << endl;
        else if (y == 0) cout << x + 1 << endl;
        else {
            for (int i = 1; i <= sqrt(min(x, y)); i++)
                if (x % i == 0 && y % i == 0) {
                    if ((max(x, y) % (min(x, y) / i) == 0)) gcd = max(gcd, min(x, y) / i);
                    else gcd = max(gcd, (long long)i);
                }
            cout << gcd + 1 << endl;
        }

    }
    return 0;
}
