// https://codeforces.com/gym/102388/problem/G

#include <iostream>
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
        int n, a, b, days = 0;
        cin >> n >> a >> b;
        if (b >= a && b < n) {
            cout << -1 << endl;
        }
        else {
            while (n > 0) {
                n -= a;
                days++;
                if (n <= 0) break;
                else n += b;
            }
            cout << days << endl;
        }
    }
    return 0;
}