#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int a, b, c, d, x, y, z;

	cin >> a >> b >> c >> d;
	x = ceil(a/d);
	y = ceil(b/d);
	z = ceil(c/d);

	cout << 2 * (x * z + y * z)  << endl;

	return 0;
}