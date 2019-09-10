#include <iostream>
using namespace std;

int main() {

	long n;
	int a, mx = 0;
	
	cin >> n;
	
	do
	{
		a = n % 1000;
		if(a > mx) mx = a;
		n /= 10;
	}while(n>100);

	cout << mx << endl;

	return 0;
}