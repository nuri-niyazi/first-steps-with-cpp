#include <iostream>
using namespace std;

int main() {

	int b1, b2, b5, p;

	cin >> b1 >> b2 >> b5 >> p;

	for(int a = 0; a <= b1; a++)
	{
		for(int b = 0; b <= b2; b++)
		{
			int tmp = p - (a + 2 * b);
			if(tmp % 5 == 0 && b5 >= tmp / 5 && tmp / 5 >= 0)
				cout << a << ' ' << b << ' ' << (p - (a + 2 * b)) / 5 << endl;
		}
	}
	
	return 0;
}