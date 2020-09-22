// https://www.hackerrank.com/contests/rait-a-thon/challenges/array-left-rotation/problem

#include <iostream>
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
    int n, d, a[100000];
    cin >> n >> d;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    if (d == n) {
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i == n - 1)cout << endl;
            else cout << " ";
        }
    }
    else {
        for (int i = d; i < n; i++) 
            cout << a[i]<<" ";
        for (int i = 0; i < d; i++) {
            cout << a[i];
            if (i == d - 1)cout << endl;
            else cout << " ";
        }
    }
    return 0;
}
