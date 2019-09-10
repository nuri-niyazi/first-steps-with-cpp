#include <iostream>
using namespace std;

int main() {

	int a, b, c;

	cin >> a >> b >> c;

	if(a + b > c && a + c > b && b + c > a) {
		cout << a + b + c << ' ';
		if(a == b && b == c) cout << "1\n";
		else if(a == b || b == c || a == c) cout << "2\n";
		else cout << "3\n";

	}
	else cout << "No\n";

	return 0;
}