// https://codeforces.com/problemset/problem/768/A

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
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int counter = 0;
    for (int i = 1; i < n-1; i++)
        if (arr[0] < arr[i] && arr[i] < arr[n - 1]) counter++;
    cout << counter << endl;
    return 0;
}