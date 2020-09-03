// https://www.urionlinejudge.com.br/judge/en/problems/view/1072

#include<iostream>
using namespace std;
int main()
{
    int n, counter = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int number;
        cin >> number;
        if (10 <= number && number <= 20) {
            counter++;
        }
    }
    cout << counter << " in\n";
    cout << n - counter << " out\n";
    return 0;
}