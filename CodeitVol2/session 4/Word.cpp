// https://codeforces.com/contest/59/problem/A

#include <iostream>
using namespace std;
int main()
{
    int counterL = 0, counterU = 0;
    string word;
    cin >> word;
    for (char x : word) {
        if ('a' <= x && x <= 'z') {
            counterL++;
        }
        else {
            counterU++;
        }
    }

    if (counterU > counterL) {
        for (char& x : word) {
            x = toupper(x);
        }
    }
    else {
        for (char& x : word) {
            x = tolower(x);
        }
    }
    cout << word;

    return 0;
}