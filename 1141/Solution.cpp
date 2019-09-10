#include <iostream>
using namespace std;

int main() {

	int a1, a2, b1, b2, c1, c2;

	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

	if((a1+a2) > (b1+b2) && (a1+a2) > (c1+c2)) cout << "A\n";
	else if((b1+b2) > (a1+a2) && (b1+b2) > (c1+c2)) cout << "B\n";
	else if((c1+c2) > (a1+a2) && (c1+c2) > (b1+b2)) cout << "C\n";
	else if(a1 >= b1 && a1 >= c1) cout << "A\n";
	else if(b1 >= a1 && b1 >= c1) cout << "B\n";
	else if(c1 >= a1 && c1 >= b1) cout << "C\n";

	return 0;
}