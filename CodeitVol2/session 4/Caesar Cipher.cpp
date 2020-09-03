// https://www.hackerrank.com/challenges/caesar-cipher-1/problem

#include <iostream>
using namespace std;
int main()
{
    int l, rotation;
    string word;
    cin >> l;
    cin >> word;
    cin >> rotation;
    for (char& x : word) {
        if (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z')) {
            while (rotation >= 26) {
                rotation -= 26;
            }
            if (tolower(x) + rotation > 'z') {
                x -= 26;
            }
            x += rotation;
        }
    }
    cout << word << endl;
    return 0;
}
