#include <iostream>
using namespace std;

int main() {

	int a, br = 0;

	do
	{
		cin >> a;
		if(a % 2 == 1) br++;
	}while(a != 0);

	cout << br << endl;
	
	return 0;
}