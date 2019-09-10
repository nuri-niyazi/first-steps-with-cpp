#include <iostream>
using namespace std;

int main() {
	
	int n, sum = 0, i = 1;

	cin >> n;

	do
	{
		if(i % 2 == 0) sum += n%10;
		n /= 10;
		i++;
	}while(n);

	cout << sum << endl;
	return 0;
}