#include <iostream>
using namespace std;

int main() {

	int a, b, c, d, mx, mx2;

	cin >> a >> b >> c >> d;

	mx = a;
	if(mx < b) mx = b;
	if(mx < c) mx = c;
	if(mx < d) mx = d;

	if(a < mx) mx2 = a;
	else mx2 = b;

	if(mx2 < a && a < mx) mx2 = a;
	if(mx2 < b && b < mx) mx2 = b;
	if(mx2 < c && c < mx) mx2 = c;
	if(mx2 < d && d < mx) mx2 = d;

	cout << 2*(a+b+c+d-mx2) << endl;

	return 0;
}