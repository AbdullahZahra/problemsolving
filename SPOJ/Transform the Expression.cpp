// https://www.spoj.com/problems/ONP/en/

#include <iostream>
#include <stack>
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
    int t, c;
    string s, s1="";
    stack<char> st;
    cin >> t;
    while (t--) {
        c = 0;
        s1 = "";
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') c++;
            else if (s[i] == ')') {
                c--;
                if (!st.empty()) {
                    s1 += st.top();
                    st.pop();
                }
            }
            else if (isalpha(s[i])) s1 += s[i];
            else st.push(s[i]);
        }
        cout << s1 << endl;
    }
    return 0;
}