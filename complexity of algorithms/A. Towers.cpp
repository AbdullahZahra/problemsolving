// A. Towers

/*
Little Vasya has received a young builder’s kit. The kit consists of several wooden bars, the lengths of all of them are known. The bars can be put one on the top of the other if their lengths are the same.

Vasya wants to construct the minimal number of towers from the bars. Help Vasya to use the bars in the best way possible.

Input
The first line contains an integer N (1 ≤ N ≤ 1000) — the number of bars at Vasya’s disposal. The second line contains N space-separated integers l i — the lengths of the bars. All the lengths are natural numbers not exceeding 1000.

Output
In one line output two numbers — the height of the largest tower and their total number. Remember that Vasya should use all the bars.
*/

// https://codeforces.com/problemset/problem/37/A

#include <bits/stdc++.h>

using namespace std;
int freq[1001];

int main()
{
    int n, maximumheight=0, counter = 0, test;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> test;
        freq[test]++;
    }
    for (int i=0; i<=1001; i++)
    {
        if (freq[i] > 0)
        {
            counter++;
            maximumheight = max(maximumheight, freq[i]);
        }
    }
    cout << maximumheight << ' ' << counter << endl;
    return 0;
}
