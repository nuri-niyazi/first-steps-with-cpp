#include <iostream>
using namespace std;

int main() {

	int a, b, c;

	cin >> a >> b >> c;

	if (a == 0)
		if(b == 0)
			if(c == 0)
				cout << "1\n";
			else 
				cout << "3\n";
		else
			if(c == 0)
				cout << "2\n";
			else
				cout << "Niama takova chislo\n";
	else
		if(b == 0)
			if(c == 0)
				cout << "5\n";
			else 
				cout << "Niama takova chislo\n";
		else
			if(c == 0)
				cout << "4\n";
			else
				cout << "6\n";

	return 0;
}