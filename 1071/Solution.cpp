#include <iostream>
using namespace std;

int main() {

	int a, ha = 0;

	cin >> a;

	if (a == 1) ha = 15; 
	if (a == 2) ha = 24;
	if (a > 2 && a <= 18) ha = 24 + 4 * (a - 2);
	if (a > 18) ha = 88 + 3 * (a - 18);
	
	cout << ha << endl;
}