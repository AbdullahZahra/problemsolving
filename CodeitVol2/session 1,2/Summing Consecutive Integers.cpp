// https://www.urionlinejudge.com.br/judge/en/problems/view/1149

#include<iostream>
using namespace std;

int main()
{
	int a, n = 0, sum = 0;
	cin >> a;
	while (n <= 0) {
		cin >> n;
	}
	for (int i = a; i < a + n; i++) {
		sum += i;
	}
	cout << sum << endl;
	return 0;
}