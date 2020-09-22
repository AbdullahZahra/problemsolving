// https://www.spoj.com/problems/STACKEZ/en/

#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;
#define endl '\n'
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}
int main()
{
    //fast();
    int t, x;
    stack<int> st;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &x);
        if (x == 1) {
            scanf("%d", &x);
            st.push(x);
        }
        else if (x == 2) {
            if (!st.empty()) st.pop();
        }
        else {
            if (st.empty()) printf("Empty!\n");
            else printf("%d\n", st.top());
        }
    }
    return 0;
}