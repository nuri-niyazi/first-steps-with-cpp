#include <iostream>
using namespace std;

int main() {

	int a, brneg = 0, br = 0;

	do
	{
		cin >> a;
		if(a % 10 == 5 || a % 10 == -5) br++;
		if(a < 0) brneg++;
	}while(brneg < 2);

	cout << br << endl;

	return 0;
}