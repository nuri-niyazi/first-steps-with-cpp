#include <iostream>
using namespace std;

int main() {

	int a, b, c, d, e;

	do{
		cin >> a >> b >> c >> d >> e;
	}while(a >= b || b >= c || c >= d || d >= e);

	cout << (a + b + c + d + e) << endl;

	return 0;
}