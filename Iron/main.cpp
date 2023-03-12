#include<iostream>
using namespace std;

void main()
{
	int a = 3, b = 8;
	cout << a << " " << b << endl;
	a ^= b ^= a ^= b;
	cout << a << " " << b;
}

