#include <iostream>
using namespace std;

int main() {

	int year;

	cin >> year;

	cout << (year%4 == 0 ? "Yes" : "No") << endl;

	return 0;
}