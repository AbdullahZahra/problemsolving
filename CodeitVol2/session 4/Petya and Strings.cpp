// https://codeforces.com/contest/112/problem/A

#include <iostream>
using namespace std;
int main()
{
    string word1, word2;
    int i = 0;
    cin >> word1;
    cin >> word2;
    for (char& x : word1) {
        x = tolower(x);
        word2[i] = tolower(word2[i]);
        i++;
    }
    if (word1 == word2) {
        cout << 0 << endl;
    }
    else if (word1 > word2) {
        cout << 1 << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}