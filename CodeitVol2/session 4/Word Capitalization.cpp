// https://codeforces.com/contest/281/problem/A?fbclid=IwAR25FEGgTqbRXIYU31A95fWUL588rrtq8Ivi4eV2h13a6BYWBEYLzGYqXTs

#include <iostream>
using namespace std;
int main()
{
    string word;
    cin >> word;
    if ('a' <= word[0] && word[0] <= 'z') {
        word[0] -= 32;
    }
    cout << word;

    return 0;
}