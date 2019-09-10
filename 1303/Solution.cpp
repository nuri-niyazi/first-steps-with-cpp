#include <iostream>
using namespace std;

int main() {

	int a, b, c, a1, b1, c1, mn, mx;

	cin >> a >> b >> c;

	mx = mn = a;
	if(mn > b) mn = b;
	if(mn > c) mn = c;

	if(mx < b) mx = b;
	if(mx < c) mx = c;

	a1 = a; b1 = b; c1 = c;
	
	if(a == mx) a1 = mn;
	else if(b == mx) b1 = mn;
	else if(c == mx) c1 = mn;
		
	if(a == mn) a1 = mx;
	else if(b == mn) b1 = mx;
	else if(c == mn) c1 = mx;

	cout << a1 << ' ' << b1 << ' ' << c1 << endl;
		
	return 0;
}