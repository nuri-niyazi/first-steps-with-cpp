#include <iostream>
using namespace std;

int main() {

	int n, a, b, c, br = 0;

	cin >> n;

	for(int i = 100; i < n && i < 1000; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;

		if(a != b && b != c && a != c) br++; 
	}

	cout << br << endl;

	return 0;
}