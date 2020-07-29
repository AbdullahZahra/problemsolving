// 10038 - Jolly Jumpers

/*
A sequence of n > 0 integers is called a jolly jumper if the absolute values of the difference between
successive elements take on all the values 1 through n − 1. For instance,
1 4 2 3
is a jolly jumper, because the absolutes differences are 3, 2, and 1 respectively. The definition implies
that any sequence of a single integer is a jolly jumper. You are to write a program to determine whether
or not each of a number of sequences is a jolly jumper.
Input
Each line of input contains an integer n ≤ 3000 followed by n integers representing the sequence.
Output
For each line of input, generate a line of output saying ‘Jolly’ or ‘Not jolly’.
*/

// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=979

#include <bits/stdc++.h>
#include <memory.h>
using namespace std;
bool freq[3001];
int main()
{
    int n, arr[3000];
    while (cin >> n){
    memset(freq, 0, 3001);

    cin >> arr[0];
    bool cond = true;
    for (int i=1; i<n; i++)
    {
        cin >> arr[i];
        freq[abs(arr[i-1]-arr[i])] = true;
    }
    for (int i=1; i<n; i++)
    {
        if (freq[i] == 0)
        {
            cond = false;
            break;
        }
    }
    if (cond == true && n>0)
       cout << "Jolly" << endl;
    else if (cond == false && n>0)
    {
        cout << "Not jolly" << endl;
    }
    n = 0;
    }
    return 0;
}
