// https://www.hackerrank.com/challenges/camelcase/problem

#include <iostream>
using namespace std;
int main()
{
    int counter = 1;
    string camelCase;
    cin >> camelCase;
    for (char x : camelCase) {
        if ('A' <= x && x <= 'Z') {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
