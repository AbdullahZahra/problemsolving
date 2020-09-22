// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1756

#include <iostream>
#include <set>
#include <string>
#include <iterator>
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
    set<string> set;
    string s, s1;
    while (getline(cin, s)) {
        s1 = "";
        for (int i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) s1 += tolower(s[i]);
            else {
                if (s1 != "") {
                    set.insert(s1);
                    s1 = "";
                }
            }
        }
        if (s1 != "") set.insert(s1);
    }
    for (string x : set) {
        cout << x << endl;
    }
    return 0;
}