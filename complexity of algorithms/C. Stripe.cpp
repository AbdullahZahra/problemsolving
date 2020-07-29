// C. Stripe

/*
Once Bob took a paper stripe of n squares (the height of the stripe is 1 square). In each square he wrote an integer number, possibly negative. He became interested in how many ways exist to cut this stripe into two pieces so that the sum of numbers from one piece is equal to the sum of numbers from the other piece, and each piece contains positive integer amount of squares. Would you help Bob solve this problem?

Input
The first input line contains integer n (1 ≤ n ≤ 105) — amount of squares in the stripe. The second line contains n space-separated numbers — they are the numbers written in the squares of the stripe. These numbers are integer and do not exceed 10000 in absolute value.

Output
Output the amount of ways to cut the stripe into two non-empty pieces so that the sum of numbers from one piece is equal to the sum of numbers from the other piece. Don't forget that it's allowed to cut the stripe along the squares' borders only.
*/

// https://codeforces.com/problemset/problem/18/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, lsum=0, rsum =0, arr[100000], counter=0;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
        rsum += arr[i];
    }
    for (int i=0; i<n-1; i++)
    {
        lsum += arr[i];
        rsum -= arr[i];
        if (lsum == rsum)
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
