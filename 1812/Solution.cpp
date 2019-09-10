#include <iostream>
using namespace std;

int main() {
	
	int n, pr = 1, i = 1;

	cin >> n;

	do
	{
		if(i % 2 == 1) pr *= n%10;
		n /= 10;
		i++;
	}while(n);

	cout << pr << endl;
	return 0;
}