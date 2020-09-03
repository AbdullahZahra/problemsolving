// https://www.urionlinejudge.com.br/judge/en/problems/view/1074

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	unsigned int numberOfT;
	cin >> numberOfT;

	while (numberOfT--) {
		string status = "";
		int n;
		cin >> n;
		if (n == 0) {
			cout << "NULL\n";
			continue;
		}

		if (n % 2 != 0) {
			status += "ODD ";
		}
		else {
			status += "EVEN ";
		}

		if (n > 0) {
			status += "POSITIVE";
		}
		else {
			status += "NEGATIVE";
		}

		cout << status << endl;
	}
	return 0;
}