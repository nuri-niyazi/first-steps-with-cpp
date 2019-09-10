#include <iostream>
using namespace std;

int main() {

	int a1, b1, a2, b2, x, y;

	cin >> x >> y >> a1 >> b1 >> a2 >> b2;

	if( 0 < x && x < a1 && 0 < y && y < b1 && 0 < x && x < a2 && 0 < y && y < b2 ) cout << "0\n";
	else if( (0 < x && x < a1 && 0 < y && y < b1) || (0 < x && x < a2 && 0 < y && y < b2) ) cout << "1\n";
	else cout << "-1\n";

	return 0;
}