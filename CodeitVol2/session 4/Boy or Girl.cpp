// https://codeforces.com/contest/236/problem/A

#include <iostream>
using namespace std;
int main()
{
    int numberOfChar = 0;
    string userName, chars = " ";
    cin >> userName;
    for (char x : userName) {
        for (int i = 0; chars[i] != '\0'; i++) {
            if (chars[i + 1] == '\0' && chars[i] != x) {
                chars += x;
                numberOfChar++;
            }
            else if (chars[i] == x) {
                break;
            }
        }
    }
    if (numberOfChar % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    }
    else {
        cout << "IGNORE HIM!\n";
    }

}