#include <iostream>
using namespace std;

int main() {

	int x1, y1, x2, y2, a1, b1, a2, b2;

	cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;

	if(	(y2-b1) >= 0 && (x2-a1) >= 0)
		cout << (y2-b1)*(x2-a1) << endl;
	else cout << "0\n";

	return 0;
}