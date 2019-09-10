#include <iostream>
using namespace std;

int main() {

	int a, b, c, br1 = 0, br2 = 0, br3 = 0;

	do
	{
		cin >> a >> b >> c;
		if(a < (b+c) && b < (a+c) && c < (a+b)){
			if(a == b && b == c) br1++;
			else if(a == b || b == c || a == c) br2++;
			else if(a != b && b != c && a != c) br3++;
		}
	}while(a < (b+c) && b < (a+c) && c < (a+b));

	cout << br1 << ' ' << br2 << ' ' << br3 << endl;

	return 0;
}