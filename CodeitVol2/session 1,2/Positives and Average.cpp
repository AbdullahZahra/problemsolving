// https://www.urionlinejudge.com.br/judge/en/problems/view/1064

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int numberOfP = 0;
	float sumOfP = 0;
	for (int i = 1; i < 7; i++) {
		float n;
		cin >> n;
		if (n > 0) {
			numberOfP++;
			sumOfP += n;
		}
	}
	cout << numberOfP << " valores positivos\n" << fixed << setprecision(1) << sumOfP / numberOfP << endl;
	return 0;
}