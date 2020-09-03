// https://www.urionlinejudge.com.br/judge/en/problems/view/1865?fbclid=IwAR0qr6LvPFFb7rPUxDWwFsEv7Nkw9rydWK3M7Mhf6urZr57LNfDkyiJa7Xs

#include <iostream>
using namespace std;
int main()
{
    int t, power;
    string name;
    cin >> t;
    while (t--) {
        cin >> name >> power;
        if (name == "Thor") {
            cout << "Y\n";
        }
        else {
            cout << "N\n";
        }
    }
    return 0;
}