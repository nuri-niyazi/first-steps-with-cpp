#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x1, y1, x2, y2, s;

	cin >> x1 >> y1 >> x2 >> y2;
	
	s = fabs(x1 - x2) * fabs(y1 - y2);

	cout << s << endl;

	return 0;
}