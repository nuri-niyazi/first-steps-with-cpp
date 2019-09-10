#include <iostream>
using namespace std;

int main() {

	float a, r, pi = 3.14;
	
	cin >> a >> r;

	cout << (a * a > pi * r * r ? a * a : pi * r * r) << endl;
	
	return 0;
}