#include <iostream>
using namespace std;

int main() {

	int a, b, c, d, e, p = 0;

	do{
		cin >> a >> b >> c >> d >> e;
		if(p < (a + b + c + d + e)) p = a + b + c + d + e;
	}while(a >= b || b >= c || c >= d || d >= e);

	cout << p << endl;

	return 0;
}