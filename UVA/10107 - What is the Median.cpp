// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1048

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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
    bool first = 1;
    vector<int> v;
    int x;
    while (cin >> x) {
        v.push_back(x);
        sort(v.begin(), v.end());

        if (v.size() % 2 == 0) {
            cout << (v[v.size() / 2] + v[(v.size() / 2) - 1]) / 2 << endl;
        }
        else
            cout << v[v.size() / 2] << endl;
    }
    return 0;
}