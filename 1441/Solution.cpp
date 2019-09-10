#include <iostream>
using namespace std;

int main() {

	int a;
	long pr = 1;

	do
	{
		cin >> a;
		pr *= a;
	}while(a != 1);

	cout << pr << endl;

	return 0;
}