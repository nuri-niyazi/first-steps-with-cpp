#include <iostream>
using namespace std;

int main() {

	int a, b, c, res, l = 0;

	cin >> a >> b >> c;

	if ( a > 4 ) { res = a; l = 1; }
	else if ( b > 4 ) { res = b; l = 1; }
	else if ( c > 4 ) { res = c; l = 1; }

	if(res < a && a > 4) res = a;
	if(res < b && b > 4) res = b;
	if(res < c && c > 4) res = c;

	if(l)
		cout << res << endl;
	else
		cout << "No solution\n";

	return 0;
}