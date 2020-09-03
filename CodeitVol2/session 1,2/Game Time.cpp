// https://www.urionlinejudge.com.br/judge/en/problems/view/1046

#include<iostream>
using namespace std;

int main()
{
	int endH, startH;
	cin >> startH >> endH;
	if (startH >= endH) {
		cout << "O JOGO DUROU " << 24 - startH + endH << " HORA(S)\n";
	}
	else {
		cout << "O JOGO DUROU " << endH - startH << " HORA(S)\n";
	}
	return 0;
}