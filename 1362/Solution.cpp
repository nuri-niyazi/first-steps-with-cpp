#include <iostream>
using namespace std;

int main() {

	float x, y;

	cin >> x >> y;

	// exist in big square but not in small square
	if( (-2 <= x && x <= 2 && -2 <= y && y <= 2 ) && !(-1 < x && x < 1 && -1 < y && y < 1 )) 
		cout << "Yes\n";
	else cout << "No\n";

	return 0;
}