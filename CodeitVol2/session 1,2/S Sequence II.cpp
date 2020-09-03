// https://www.urionlinejudge.com.br/judge/en/problems/view/1156

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

	double sum = 0, up = 1;
	int down = 1;
	while (true) {
		sum += up / down;
		up += 2;
		down *= 2;
		if (up == 41) {
			break;
		}
	}
	cout << fixed << setprecision(2) << sum << endl;
	return 0;
}