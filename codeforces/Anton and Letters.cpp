// https://codeforces.com/problemset/problem/443/A

#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;
#define endl '\n'
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}
int freq[4];
int main()
{
    fast();
    set<char> st;
    string s;
    getline(cin, s);
    for (int i = 0; s[i] != '}';i++) 
        if (isalpha(s[i])) st.insert(s[i]);
    
    cout << st.size() << endl;
    return 0;
}