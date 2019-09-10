#include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	do
	{
		cout << n%10 << endl;
		n /= 10;
	}while(n);

	return 0;
}