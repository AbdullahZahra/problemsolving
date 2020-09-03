// https://codeforces.com/problemset/problem/467/A

#include<iostream>
using namespace std;

int main()
{

	unsigned short n, qi, pi, numberOfRooms = 0;
	cin >> n;
	while (n--) {
		cin >> pi >> qi;
		if (pi + 2 <= qi) {
			numberOfRooms++;
		}
	}
	cout << numberOfRooms << endl;
	return 0;
}