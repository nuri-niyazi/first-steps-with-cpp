#include <iostream>
using namespace std;

int main() {

	int n, palni, chas;

	cin >> n;

	palni = n / 12; // делим въведените часове на броя часове за едно завъртане

	chas = n % 12; // делението с остатък ни дава отместването от 12 часа
	if(chas == 0) chas = 12;

	cout << palni << ' ' << chas << endl;

	return 0;
}