// https://codeforces.com/problemset/problem/381/A

#include <iostream>
#include <set>
#include <string>
#include <queue>
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
    int n, s = 0, d = 0, turn = 0, x;
    deque<int> dq;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        dq.push_back(x);
    }

    
    while (!dq.empty()) {
        if (!(turn % 2)) {
            if (dq.front() >= dq.back()) {
                s += dq.front();
                dq.pop_front();
            }
            else {
                s += dq.back();
                dq.pop_back();
            }
        }
        else {
            if (dq.front() >= dq.back()) {
                d += dq.front();
                dq.pop_front();
            }
            else {
                d += dq.back();
                dq.pop_back();
            }
        }
        turn++;
    }
    cout << s << " " << d << endl;
    return 0;

}