#include <iostream>
using namespace std;

int main() {

	int x1, y1, a, b, x, y, x2, y2;

	cin >> x1 >> y1 >> a >> b >> x >> y;

	x2 = x1 + a;
	y2 = y1 + b;

	if(x1 <= x && x <= x2 && y1 <= y && y <= y2) cout << "1\n";
	else cout << "-1\n";

	return 0;
}