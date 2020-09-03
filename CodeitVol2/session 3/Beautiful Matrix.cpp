// https://codeforces.com/contest/263/problem/A

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	unsigned short matrix[5][5], row, column;
	for (short i = 0; i < 5; i++) {
		for (short j = 0; j < 5; j++) {
			cin >> matrix[i][j];
			if (matrix[i][j] == 1) {
				row = i;
				column = j;
			}
		}
	}
	cout << abs(row - 2) + abs(column - 2) << endl;
	return 0;
}