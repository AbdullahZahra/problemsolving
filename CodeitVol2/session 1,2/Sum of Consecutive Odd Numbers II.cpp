// https://www.urionlinejudge.com.br/judge/en/problems/view/1099

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	unsigned int numberOfT;
	cin >> numberOfT;

	while (numberOfT--) {
		unsigned int sum = 0;
		int x, y;
		cin >> x >> y;
		for (int i = min(x, y) + 1; i < max(x, y); i++) {

			if (i % 2 != 0) {
				sum += i;
			}
		}
		cout << sum << endl;
	}
	return 0;
}