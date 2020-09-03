// https://www.urionlinejudge.com.br/judge/en/problems/view/1155

#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	double sum = 0.01;
	for (int i = 1; i < 101; i++) {
		sum += pow(i, -1);
	}
	cout << floor(sum * 100) / 100 << endl;
	return 0;
}