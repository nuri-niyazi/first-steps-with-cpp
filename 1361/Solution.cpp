#include <iostream>
using namespace std;

int main() {

	float x, y;

	cin >> x >> y;

	if(-1 <= x && x <= 1 && -1 <= y && y <= 1) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}