// https://www.urionlinejudge.com.br/judge/en/problems/view/1182

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	short column;
	char operation;
	double sum = 0, m[12][12];

	cin >> column;
	cin >> operation;

	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 12; j++) {
			cin >> m[i][j];
			if (j == column) {
				sum += m[i][j];
			}
		}
	}
	switch (operation) {
	case 'S':
		cout << fixed << setprecision(1) << sum << endl;
		break;
	case 'M':
		cout << fixed << setprecision(1) << sum / 12 << endl;
		break;
	}

	return 0;
}