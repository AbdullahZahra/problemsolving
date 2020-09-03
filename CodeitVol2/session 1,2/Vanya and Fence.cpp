// https://codeforces.com/contest/677/problem/A

#include<iostream>
using namespace std;

int main()
{
	int numberOfFriends, fenceHight, width = 0;
	cin >> numberOfFriends >> fenceHight;
	while (numberOfFriends--) {
		int personHight;
		cin >> personHight;
		if (personHight > fenceHight) {
			width += 2;
		}
		else {
			width += 1;
		}
	}
	cout << width << endl;
	return 0;
}