#include <iostream>
using namespace std;

int main() {

	int a;

	cin >> a;

	switch(a)
	{
		case 1:
		case 3: 
		case 5: 
		case 7: 
		case 10: 
		case 12: 
			cout << "31\n";
		break;
		case 2: 
			cout << "29\n";
		break;
		default: 
			cout << "30\n";
		break;
	}

	return 0;
}