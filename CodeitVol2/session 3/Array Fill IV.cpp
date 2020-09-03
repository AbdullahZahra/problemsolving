// https://www.urionlinejudge.com.br/judge/en/problems/view/1179

#include<iostream>
using namespace std;

int main()
{
	short counter = 15, parCounter = 0, imparCounter = 0;
	int input, par[5], impar[5];
	while (counter--) {
		cin >> input;

		// input
		if (input % 2 == 0) {
			par[parCounter] = input;
			parCounter++;
		}
		else {
			impar[imparCounter] = input;
			imparCounter++;
		}

		// print order
		if (parCounter == 5) {
			for (int i = 0; i < 5; i++) {
				cout << "par[" << i << "] = " << par[i] << endl;
			}
			parCounter = 0;
		}
		if (imparCounter == 5) {
			for (int i = 0; i < 5; i++) {
				cout << "impar[" << i << "] = " << impar[i] << endl;
			}
			imparCounter = 0;
		}

		if (counter == 0) {
			for (int i = 0; i < imparCounter; i++) {
				cout << "impar[" << i << "] = " << impar[i] << endl;
			}
			for (int i = 0; i < parCounter; i++) {
				cout << "par[" << i << "] = " << par[i] << endl;
			}
		}

	}
	return 0;
}