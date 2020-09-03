// https://www.urionlinejudge.com.br/judge/en/problems/view/1175

#include<iostream>
using namespace std;

int main()
{
	int arr[20];
	for (short i = 19; i >= 0; i--) {
		cin >> arr[i];
	}
	for (short i = 0; i < 20; i++) {
		cout << "N[" << i << "] = " << arr[i] << endl;
	}
	return 0;
}