#include <iostream>
using namespace std;

int main() {

	int a, b, x, y, z;

	cin >> a >> b;

	for(int i = a; i <= b; i++)
	{
		x = i / 10;
		y = (i / 100)*10 + i % 10;
		z = i % 100;

		if( x+y == z || x+z == y || y+z == x )
			cout << i << endl;
	}

	return 0;
}