// https://codeforces.com/problemset/problem/492/B

#include <iostream>
#include <set>
#include <algorithm>
#include <cmath>
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
    int n, l, d = 0;
    set<double> st;
    cin >> n >> l;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);

    st.insert(arr[0] - 0);
    st.insert(l - arr[n - 1]);
    for (int i = 0; i < n - 1; i++)
        st.insert((double)(arr[i + 1] - arr[i]) / 2);
    
    set<double>::reverse_iterator it = st.rbegin();
    cout << fixed << setprecision(10) << *it << endl;
    return 0;
}
