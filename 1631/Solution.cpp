#include <iostream>
using namespace std;

int main() {

	int a, sum = 0, pr = 1, br = 0;

	do
	{
		cin >> a;
		sum += a;
		br++;
		if(a % 2 == 0 && a > 0) pr *= a;
	}while(pr < 1000);

	cout << sum << ' ' << br << endl;

	return 0;
}