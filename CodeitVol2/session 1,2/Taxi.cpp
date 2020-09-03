// https://codeforces.com/problemset/problem/158/B

#include<iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int val, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> val;
        switch (val) {
        case 1:
            ++cnt1;
            break;
        case 2:
            ++cnt2;
            break;
        case 3:
            ++cnt3;
            break;
        case 4:
            ++cnt4;
            break;
        }
    }
    int total = 0;
    total += cnt4 + cnt3;

    if (cnt3 >= cnt1) cnt1 = 0;
    else cnt1 -= cnt3;

    if (cnt2 & 1) {
        cnt1 += 2;
        cnt2 -= 1;
    }

    total += cnt2 / 2;
    total += cnt1 / 4;

    if (cnt1 % 4) ++total;
    cout << total << endl;
    return 0;
}