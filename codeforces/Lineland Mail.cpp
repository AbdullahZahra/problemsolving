// https://codeforces.com/problemset/problem/567/A

#include <iostream>
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
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for (int i = 0; i < n; i++) {
        if (i == 0) cout << abs(arr[i] - arr[i + 1]) << " " << abs(arr[i] - arr[n-1]) << endl;
        else if (i == n - 1) cout << abs(arr[i] - arr[i - 1]) << " " << abs(arr[i] - arr[0]) << endl;
        else {
            cout << min(abs(arr[i] - arr[i + 1]),
                    abs(arr[i] - arr[i - 1])) << " " << max(abs(arr[i] - arr[0]),
                    abs(arr[i] - arr[n - 1])) << endl;
        }
    }
    return 0;
}
