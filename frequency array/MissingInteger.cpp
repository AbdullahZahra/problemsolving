// MissingInteger

/*
This is a demo task.

Write a function:

int solution(vector<int> &A);

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [−1, −3], the function should return 1.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..100,000];
each element of array A is an integer within the range [−1,000,000..1,000,000].

*/

// https://app.codility.com/programmers/lessons/4-counting_elements/missing_integer/

#include <bits/stdc++.h>

using namespace std;

bool freq[100001];

int solution(vector<int> &A) {
    
    for (int i=0; i<A.size(); i++)
    {
        
        if (A[i]>0 && A[i] <= 100000) freq[A[i]] = true;
    }
    for (int i=1; i<= 100000; i++)
    {
        if (freq[i] == false)
        {
            return i;
        }
    }
    return 100001;
}
