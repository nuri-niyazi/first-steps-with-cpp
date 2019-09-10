#include <iostream>
using namespace std;

int main() {

	int a;

	cin >> a;

	switch(a)
	{
		case 1: cout << "ponedelnik\n";
		break;
		case 2: cout << "vtornik\n";
		break;
		case 3: cout << "srqda\n";
		break;
		case 4: cout << "chetvyrtyk\n";
		break;
		case 5: cout << "petyk\n";
		break;
		case 6: cout << "sybota\n";
		break;
		case 7: cout << "nedelq\n";
		break;
		default: cout << "Greshen vhod!\n";
		break;
	}
	return 0;
}