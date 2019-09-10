#include <iostream>
using namespace std;

int main() {

	int n, orgn, revn = 0;

	cin >> n;
	orgn = n;

	do
	{
		revn = (revn * 10) + n % 10;
		n /= 10;
	}while(n);

	cout << orgn+revn << endl;

	return 0;
}