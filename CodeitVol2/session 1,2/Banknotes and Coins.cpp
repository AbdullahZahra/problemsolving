// https://www.urionlinejudge.com.br/judge/en/problems/view/1021

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float n, value;
    short n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0, n05 = 0, n02 = 0, n01 = 0, n005 = 0, n001 = 0;
    cin >> n;
    value = ((int)ceil(n * 100)) % 10000;
    while (value != 0) {
        if (value >= 5000) {
            n50++;
            value -= 5000;
        }
        else if (value >= 2000) {
            n20++;
            value -= 2000;
            continue;
        }
        else if (value >= 1000) {
            n10++;
            value -= 1000;
        }
        else if (value >= 500) {
            n5++;
            value -= 500;
        }
        else if (value >= 200) {
            n2++;
            value -= 200;
        }
        else if (value >= 100) {
            n1++;
            value -= 100;
        }
        else if (value >= 50) {
            n05++;
            value -= 50;
        }
        else if (value >= 25) {
            n02++;
            value -= 25;
        }
        else if (value >= 10) {
            n01++;
            value -= 10;
        }
        else if (value >= 5) {
            n005++;
            value -= 5;
        }
        else if (value >= 1) {
            n001++;
            value -= 1;
        }
    }
    cout << "NOTAS:\n";
    cout << (int)(n / 100) << " nota(s) de R$ 100.00\n";
    cout << n50 << " nota(s) de R$ 50.00\n";
    cout << n20 << " nota(s) de R$ 20.00\n";
    cout << n10 << " nota(s) de R$ 10.00\n";
    cout << n5 << " nota(s) de R$ 5.00\n";
    cout << n2 << " nota(s) de R$ 2.00\n";
    cout << "MOEDAS:\n";
    cout << n1 << " moeda(s) de R$ 1.00\n";
    cout << n05 << " moeda(s) de R$ 0.50\n";
    cout << n02 << " moeda(s) de R$ 0.25\n";
    cout << n01 << " moeda(s) de R$ 0.10\n";
    cout << n005 << " moeda(s) de R$ 0.05\n";
    cout << n001 << " moeda(s) de R$ 0.01\n";
    return 0;
}