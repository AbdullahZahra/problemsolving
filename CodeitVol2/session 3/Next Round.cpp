// https://codeforces.com/problemset/problem/158/A?fbclid=IwAR1W0o0sTe_yeiv30KlIo65GZlO1sM7aVVceGli4iKtZxyVc5cPQ4vxK-Yw

#include<iostream>
using namespace std;

int main()
{
	unsigned short n, k, advanceCounter = 0, scoreToAdvance = 0;
	cin >> n >> k;
	unsigned short earned[n];
	for (short i = 0; i < n; i++) {
		cin >> earned[i];
		if (earned[i] > 0 && i <= k - 1) {
			advanceCounter++;
		}
		if (i == k - 1) {
			scoreToAdvance = earned[i];
		}
		else if (i > k - 1) {
			if (earned[i] > 0 && earned[i] >= scoreToAdvance) {
				advanceCounter++;
			}
		}
	}
	cout << advanceCounter << endl;
	return 0;
}