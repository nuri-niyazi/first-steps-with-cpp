#include <iostream>
using namespace std;

int main() {

	float x, y;

	cin >> x >> y;

	if( -1 <= x && x <= 1 && -1 <= y && y <= 1) cout << "10\n";
	else if( -2 <= x && x <= 2 && -2 <= y && y <= 2) cout << "5\n";
	else if( -3 <= x && x <= 3 && -3 <= y && y <= 3) cout << "2\n";
	else cout << "0\n";

	return 0;
}