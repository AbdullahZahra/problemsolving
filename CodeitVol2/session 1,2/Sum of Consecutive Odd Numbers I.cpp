// https://www.urionlinejudge.com.br/judge/en/problems/view/1071

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int x, y, sumOfOdd = 0;
	cin >> x >> y;
	for (int i = min(x, y) + 1; i < max(x, y); i++) {
		if (i % 2 != 0) {
			sumOfOdd += i;
		}
	}
	cout << sumOfOdd << endl;
	return 0;
}