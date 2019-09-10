#include <iostream>
using namespace std;

int main() {

	int n, a, b, c;

	cin >> n;

	for(int i = 100; i < 1000; i++){
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if(n == (a + b + c)) cout << i << ' ';
	}

	cout << endl;
	
	return 0;
}