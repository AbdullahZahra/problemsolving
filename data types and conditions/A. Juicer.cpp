// A. Juicer

/*
Kolya is going to make fresh orange juice. He has n oranges of sizes a 1, a 2, ..., a n. Kolya will put them in the juicer in the fixed order, starting with orange of size a 1, then orange of size a 2 and so on. To be put in the juicer the orange must have size not exceeding b, so if Kolya sees an orange that is strictly greater he throws it away and continues with the next one.

The juicer has a special section to collect waste. It overflows if Kolya squeezes oranges of the total size strictly greater than d. When it happens Kolya empties the waste section (even if there are no more oranges) and continues to squeeze the juice. How many times will he have to empty the waste section?

Input
The first line of the input contains three integers n, b and d (1 ≤ n ≤ 100 000, 1 ≤ b ≤ d ≤ 1 000 000) — the number of oranges, the maximum size of the orange that fits in the juicer and the value d, which determines the condition when the waste section should be emptied.

The second line contains n integers a 1, a 2, ..., a n (1 ≤ a i ≤ 1 000 000) — sizes of the oranges listed in the order Kolya is going to try to put them in the juicer.

Output
Print one integer — the number of times Kolya will have to empty the waste section.


*/

// https://codeforces.com/contest/709/problem/A

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int n, b, d, test, waste=0, sum=0;
    cin >> n >> b >> d;
    for (int i=0; i<n; i++)
    {
        cin >>  test;
        if (test <= b)
        {
            sum += b;
        }
        if (sum > d)
        {
            waste++;
            sum =0;
        }
    }
    cout << waste    << endl;
    return 0;
}
