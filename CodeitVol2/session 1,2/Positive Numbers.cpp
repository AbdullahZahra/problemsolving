// https://www.urionlinejudge.com.br/judge/en/problems/view/1060

#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	for (int i = 1; i < 7; i++) {
		float n;
		cin >> n;
		if (n > 0) {
			sum++;
		}
	}
	cout << sum << " valores positivos\n";
	return 0;
}