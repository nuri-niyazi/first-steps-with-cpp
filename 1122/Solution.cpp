#include <iostream>
using namespace std;

int main() {

	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if((a <= c && b <= d) || (a <= d && b <= c))
		cout << "Yes\n";
	else
		cout << "No\n";

	return 0;
}