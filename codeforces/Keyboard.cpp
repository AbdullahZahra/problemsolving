// https://codeforces.com/problemset/problem/474/A

#include <iostream>
#include <map>
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
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./", s;
    char shift;
    cin >> shift >> s;
    if (shift == 'R') {
        //index - 1
        for (char& x : s)
            x = s1[s1.find(x) - 1];
    }
    else {
        //index + 1
        for (char& x : s)
            x = s1[s1.find(x) + 1];
    }
    cout << s << endl;
    return 0;
}