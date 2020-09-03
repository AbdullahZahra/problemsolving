// https://codeforces.com/contest/282/problem/A

#include <iostream>
using namespace std;
int main()
{
    int x = 0, t;
    string word;
    cin >> t;
    while (t--) {
        cin >> word;
        if (word[0] == '+' || word[2] == '+')
            x++;
        else if (word[0] == '-' || word[2] == '-')
            x--;
    }
    cout << x << endl;
    return 0;
}