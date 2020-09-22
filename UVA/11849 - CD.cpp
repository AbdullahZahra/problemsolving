// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2949

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
    long long n, m, x;
    map<long long, int> mp;
    while (cin >> n >> m && n != 0 && m != 0) {
        long long counter = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            mp[x]++;
        }
        for (int i = 0; i < m; i++) {
            cin >> x;
            if (mp[x]) {
                counter++;
                mp[x] = 0;
            }
        }
        cout << counter << endl;
    }
    return 0;
}