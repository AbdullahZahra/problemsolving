// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1223

#include <iostream>
#include <map>
#include <string>
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
    map<string, string> mp;
    string s;
    while (getline(cin, s) && s != "")
    {
        string a = s.substr(0, s.find(' '));
        string b = s.substr(s.find(' ') + 1);
        mp[b] = a;
    }
    while (cin >> s) {
        if (mp.find(s) == mp.end()) cout << "eh\n";
        else cout << mp[s] << endl;
    }
    return 0;
}