#include <iostream>
using namespace std;

int main() {

	int a, sum = 0;
	long long pr = 1;

	do
	{
		cin >> a;
		if(a % 2 == 0) sum += a;
		else pr *= a;
	}while(a != 0);

	cout << sum << ' ' << pr << endl;

	return 0;
}