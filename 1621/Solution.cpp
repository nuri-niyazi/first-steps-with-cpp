#include <iostream>
using namespace std;

int main() {

	int k, a, sum = 0, br = 0;

	cin >> k;

	do
	{
		cin >> a;
		sum += a;
		br++;
	}while(sum < k);

	cout << br << endl;

	return 0;
}