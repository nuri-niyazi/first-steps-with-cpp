#include <iostream>
using namespace std;

int main() {

	int a, br = 0;

	do
	{
		cin >> a;
		if(a > 0 && a%2 == 0) br++;
	}while(a > -1);

	cout << br << endl;

	return 0;
}