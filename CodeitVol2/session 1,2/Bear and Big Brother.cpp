// https://codeforces.com/contest/791/problem/A

#include<iostream>
using namespace std;

int main()
{

	unsigned short limakW, bobW, counter = 0;
	cin >> limakW >> bobW;
	while (limakW <= bobW) {
		limakW *= 3;
		bobW *= 2;
		counter++;
	}
	cout << counter << endl;
	return 0;
}