#include <iostream>
using namespace std;

int main() {

	int a, b, x, y, z, w, v, br = 0;

	cin >> a >> b;

	for(int i = a; i <= b; i++ )
	{
		x = i / 10000;
		y = i / 1000 % 10;
		z = i / 100 % 10;
		w = i / 10 % 10;
		v = i % 10;
		if(x+y == z && z == w+v) br++;
	}

	cout << br << endl;

	return 0;
}