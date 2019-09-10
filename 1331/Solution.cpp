#include <iostream>
using namespace std;

int main() {

	int x, y, x1, y1, x2, y2;

	cin >> x >> y >> x1 >> y1 >> x2 >> y2;

	if(x1 <= x && x <= x2 && y <= y1 && y2 <= y) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}