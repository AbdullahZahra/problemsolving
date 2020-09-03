// https://codeforces.com/problemset/problem/268/A

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
int freq[101];
int main()
{
    fast();
    int n, counter = 0;
    vector<int> h;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x ;
        h.push_back(x);
        cin >> x;
        freq[x]++;
    }
    for (int i = 0; i < n; i++) {
        counter += freq[h[i]];
    }
    cout << counter << endl;
    return 0;
}
