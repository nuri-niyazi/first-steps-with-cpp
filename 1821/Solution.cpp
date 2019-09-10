#include <iostream>
using namespace std;

int main() {

	int n, sum = 0;

	cin >> n;

	do
	{
		if(n >= 10) sum += n % 10;
		n /= 10;
	}while(n);

	cout << (sum%3 == 0 ? "Yes" : "No") << endl;

	return 0;
}