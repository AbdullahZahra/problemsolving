// https://codeforces.com/problemset/problem/652/B

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
    int n, x;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> x;
        mp[x]++;
    }
    map<int, int>::iterator mn = mp.begin(), mx = mp.end(); mx--;
    for (int i = 0; i < n; i++) {
        if (mp[(*mx).first] == 0) mx--;
        if (mp[(*mn).first] == 0) mn++;
        
        if (i % 2 == 1) {
            arr[i]= (*mx).first;
            mp[(*mx).first]--;
        }
        else {
            arr[i]= (*mn).first;
            mp[(*mn).first]--;
        }

        if (*mn > *mx && i < n - 1) {
            cout << "Impossible\n";
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i];

        if (i == n) cout << endl;
        else cout << " ";
    }
    
    return 0;
}