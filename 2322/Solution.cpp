#include <iostream>
using namespace std;

int main() {

	int x1, y1, x2, y2, x3, y3, x4, y4;
	long s;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	
	s = (y1-y4)*(x2-x3);

	cout << s << endl;

	return 0;
}