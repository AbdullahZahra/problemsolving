// https://www.urionlinejudge.com.br/judge/en/problems/view/1150

#include<iostream>
using namespace std;

int main()
{
	int x, z, numberOfN = 0, sum = 0;
	cin >> x;
	z = x;
	while (x >= z) {
		cin >> z;
	}
	for (int i = x; sum < z; i++) {
		numberOfN++;
		sum += i;
	}
	cout << numberOfN << endl;
	return 0;
}