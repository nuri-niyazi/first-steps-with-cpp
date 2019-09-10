#include <iostream>
using namespace std;

int main() {

	int a, b, a1, a2, a3, a4, b1, b2, b3, b4, bk = 0, kr = 0;

	cin >> a >> b;

	a1 = a / 1000;
	a2 = a / 100 % 10;
	a3 = a / 10 % 10;
	a4 = a % 10;

	b1 = b / 1000;
	b2 = b / 100 % 10;
	b3 = b / 10 % 10;
	b4 = b % 10;

	if(a1 == b1) bk++;
	if(a2 == b2) bk++;
	if(a3 == b3) bk++;
	if(a4 == b4) bk++;

	if(a1 == b2 || a1 == b3 || a1 == b4) kr++;
	if(a2 == b1 || a2 == b3 || a1 == b4) kr++;
	if(a3 == b1 || a3 == b2 || a3 == b4) kr++;
	if(a4 == b1 || a4 == b2 || a4 == b3) kr++;

	cout << bk << ' ' << kr << endl;

	return 0;
}