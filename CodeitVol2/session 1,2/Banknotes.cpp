// https://www.urionlinejudge.com.br/judge/en/problems/view/1018

#include<iostream>
using namespace std;
int main()
{
    int n;
    short value, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    cin >> n;
    value = n % 100;
    while (value != 0) {
        if (value >= 50) {
            n50++;
            value -= 50;
        }
        else if (value >= 20) {
            n20++;
            value -= 20;
            continue;
        }
        else if (value >= 10) {
            n10++;
            value -= 10;
        }
        else if (value >= 5) {
            n5++;
            value -= 5;
        }
        else if (value >= 2) {
            n2++;
            value -= 2;
            continue;
        }
        else {
            n1++;
            value -= 1;
        }
    }
    cout << n << endl;
    cout << n / 100 << " nota(s) de R$ 100,00\n";
    cout << n50 << " nota(s) de R$ 50,00\n";
    cout << n20 << " nota(s) de R$ 20,00\n";
    cout << n10 << " nota(s) de R$ 10,00\n";
    cout << n5 << " nota(s) de R$ 5,00\n";
    cout << n2 << " nota(s) de R$ 2,00\n";
    cout << n1 << " nota(s) de R$ 1,00\n";

    return 0;
}