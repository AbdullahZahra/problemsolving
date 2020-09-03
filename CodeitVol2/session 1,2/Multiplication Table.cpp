// https://www.urionlinejudge.com.br/judge/en/problems/view/1078

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	unsigned int number;
	cin >> number;

	for (int i = 1; i < 11; i++) {
		cout << i << " x " << number << " = " << i * number << endl;
	}
	return 0;
}