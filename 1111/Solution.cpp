#include <iostream>
using namespace std;

int main() {

	int y1, y2;

	cin >> y1 >> y2;

	if ( y2 - y1 >= 18 )
		cout << "Yes\n";
	else if ( y2 - y1 < 16)
		cout << "No\n";
	else
		cout << "S pridrujitel\n";

	return 0;
}