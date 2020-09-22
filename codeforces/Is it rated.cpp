// https://codeforces.com/problemset/problem/807/A

#include <iostream>
#include <set>
#include <algorithm>
#include <string>
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
    bool change = 0;
    int n, a1[1000], a2[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a1[i] >> a2[i];
        if (a1[i] != a2[i]) change = 1;
    }
    
    if (change) cout << "rated\n";
    else {
        sort(a1, a1 + n);
        reverse(a1, a1 + n);
        for (int i = 0; i < n; i++) {
            if (a1[i] != a2[i]) {
                cout << "unrated\n";
                return 0;
            }
        }
        cout << "maybe\n";
        return 0;
    }
    
    return 0;
}
