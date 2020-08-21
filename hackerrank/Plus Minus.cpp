// Plus Minus

// https://www.hackerrank.com/challenges/plus-minus/problem

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;



int main()
{
    double n, x, positive=0, negative=0, zeros=0;
    cin >> n;
    for (int i=0; i<n ; i++)
    {
        cin >> x;
        if (x < 0) negative++;
        else if (x>0) positive++;
        else zeros++;
    }
    cout << fixed << setprecision(6) << positive/n << endl << negative/n << endl << zeros/n << endl;
    return 0;
}
