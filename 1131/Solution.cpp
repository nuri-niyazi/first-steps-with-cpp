#include <iostream>
using namespace std;

int main() {

	int a, b, c, a1, a2, a3, b1, b2, b3, t1, t2;

	cin >> a >> b;

	a1 = a / 100;
	a2 = a / 10 % 10;
	a3 = a % 10;

	b1 = b / 100;
	b2 = b / 10 % 10;
	b3 = b % 10;

	a = a1+b3;
	if(a > 9){
		t1 = a / 10;
		t2 = a % 10;
		a = t1 + t2;
	}

	b = a2+b2;
	if(b > 9){
		t1 = b / 10;
		t2 = b % 10;
		b = t1 + t2;
	}

	c = a3+b1;
	if(c > 9){
		t1 = c / 10;
		t2 = c % 10;
		c = t1 + t2;
	}

	cout << a << b << c << endl;

	return 0;
}