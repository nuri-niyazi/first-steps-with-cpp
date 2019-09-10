#include <iostream>
using namespace std;

int main() {

	int a, b, c;

	cin >> a >> b >> c;

	while(a != 0 || b != 0 || c != 0)
	{
		if((a + b + c) % 3 == 0)
			cout << "Yes\n";
		else
			cout << "No\n";
		cin >> a >> b >> c;		
	}

	return 0;
}