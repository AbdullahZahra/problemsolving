// https://www.hackerrank.com/challenges/strong-password/problem

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    string special_characters = "!@#$%^&*()-+";
    bool isDigit = false, isLower = false, isUpper = false, isSymbol = false;
    int length, required = 0;
    string password;
    cin >> length;
    cin >> password;

    for (char x : password) {
        if (isdigit(x)) {
            isDigit = true;
        }
        else if (isupper(x)) {
            isUpper = true;
        }
        else if (islower(x)) {
            isLower = true;
        }
        else if (!isSymbol) {
            for (char y : special_characters) {
                if (y == x) {
                    isSymbol = true;
                }
            }
        }
    }
    if (!isDigit) {
        required++;
    }
    if (!isLower) {
        required++;
    }
    if (!isUpper) {
        required++;
    }
    if (!isSymbol) {
        required++;
    }
    if (length + required < 6) {
        cout << 6 - length << endl;
    }
    else {
        cout << required << endl;
    }
    return 0;
}
