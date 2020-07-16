// B. Basic Data Types
/*
The following lines show some C++ data types, their format specifiers and their most common bit widths:

int : 32 Bit integer.
long long : 64 bit integer
Char : 8 bit Characters & symbols
Float : 32 bit real value
Double : 64 bit real value
Reading

To read a data type, use the following syntax:

   cin >> VariableName;
 
For example, to read a character followed by a double:
  char ch;
  double d;
  cin >> ch >> d;
 
Printing

To print a data type, use the following syntax:

cout << VariableName;
 
For example, to print a character followed by a double:
char ch = 'd';
double d = 234.432;
cout << ch << " "<< d;
 
Input
Only one line containing the following space-separated values: int, long long, char, float and double respectively.

Output
Print each element on a new line in the same order it was received as input.

Don't print any extra spaces.
*/

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B

#include <iostream>
using namespace std;
 
 
int main()
{
int a;
long long b;
char c;
float d;
double e;
cin >> a >>b>>c>>d>>e;
cout << a << endl << b << endl << c << endl << d << endl << e << endl;
return 0;
}
