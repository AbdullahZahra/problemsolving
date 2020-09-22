// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=425

#include <iostream>
#include <map>
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
    map<long long, long long> mp;
    vector<long long> v;
    int x;
    while (cin >> x) {
        mp[x]++;
        if (mp[x] == 1) v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " " << mp[v[i]] << endl;
    }
    return 0;
}