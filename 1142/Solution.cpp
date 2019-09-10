#include <iostream>
using namespace std;

int main() {

	char a, b, c, d;

	cin >> a >> b >> c >> d;

	if(a == 'a') a = 'z';
	else a--;
	if(b == 'a') b = 'z';
	else b--;
	if(c == 'a') c = 'z';
	else c--;
	if(d == 'a') d = 'z';
	else d--;

	cout << (char)a << (char)b << (char)c << (char)d << endl;

	return 0;
}