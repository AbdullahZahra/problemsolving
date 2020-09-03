// https://codeforces.com/contest/709/problem/A

#include<iostream>
using namespace std;

int main()
{

	int n, b, d, a, totalSize = 0, counter = 0;
	cin >> n >> b >> d;
	while (n--) {
		cin >> a;
		if (a <= b) {
			totalSize += a;
		}
		if (totalSize > d) {
			counter++;
			totalSize = 0;
		}
	}
	cout << counter << endl;
	return 0;
}