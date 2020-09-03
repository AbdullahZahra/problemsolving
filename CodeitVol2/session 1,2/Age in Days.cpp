// https://www.urionlinejudge.com.br/judge/en/problems/view/1020

#include <iostream>
using namespace std;
int main()
{
    int day = 0, month = 0, year = 0, input;
    cin >> input;
    while (input >= 365) {
        year++;
        input -= 365;
    }
    while (input >= 30) {
        month++;
        input -= 30;
    }
    while (input > 0) {
        day++;
        input--;
    }

    cout << year << " ano(s)\n" << month << " mes(es)\n" << day << " dia(s)\n";


    return 0;
}