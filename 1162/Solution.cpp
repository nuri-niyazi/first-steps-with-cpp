#include <iostream>
using namespace std;

int main() {

	int a, b, c, row = 0, win = 0;

	cin >> a >> b >> c;
	if((a == b || b == c || a == c) && (a + b + c) > win ) { row = 1; win = a + b + c; }
	cin >> a >> b >> c;
	if((a == b || b == c || a == c) && (a + b + c) > win ) { row = 2; win = a + b + c; }
	cin >> a >> b >> c;
	if((a == b || b == c || a == c) && (a + b + c) > win ) { row = 3; win = a + b + c; }
	cin >> a >> b >> c;
	if((a == b || b == c || a == c) && (a + b + c) > win ) { row = 4; win = a + b + c; }
	cin >> a >> b >> c;
	if((a == b || b == c || a == c) && (a + b + c) > win ) { row = 5; win = a + b + c; }
	cin >> a >> b >> c;
	if((a == b || b == c || a == c) && (a + b + c) > win ) { row = 6; win = a + b + c; }
	cin >> a >> b >> c;
	if((a == b || b == c || a == c) && (a + b + c) > win ) { row = 7; win = a + b + c; }

	if(row != 0)
		cout << row << ' ' << win << endl;
	else
		cout << "No solution\n";

	return 0;
}