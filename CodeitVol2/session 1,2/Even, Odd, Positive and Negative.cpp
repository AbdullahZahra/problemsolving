// https://www.urionlinejudge.com.br/judge/en/problems/view/1066

#include<iostream>
using namespace std;

int main()
{
	int numberOfP = 0, numberOfN = 0, numberOfE = 0, numberOfO = 0;
	for (int i = 1; i < 6; i++) {
		int n;
		cin >> n;
		if (n > 0) {
			numberOfP++;
		}
		else if (n < 0) {
			numberOfN++;
		}
		if (n % 2 == 0) {
			numberOfE++;
		}
		else {
			numberOfO++;
		}
	}
	cout << numberOfE << " valor(es) par(es)\n";
	cout << numberOfO << " valor(es) impar(es)\n";
	cout << numberOfP << " valor(es) positivo(s)\n";
	cout << numberOfN << " valor(es) negativo(s)\n";
	return 0;
}