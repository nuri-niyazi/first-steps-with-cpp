#include <iostream>
using namespace std;

int main() {

	int a, b, c, pmx = 0, i = 1, j = 1;

	do
	{
		cin >> a >> b >> c;
		if(a < (b+c) && b < (a+c) && c < (a+b) && (pmx == 0 || pmx < (a + b + c)))
		{
			pmx = a + b + c;
			j = i;
		}
		i++;
	}while(a < (b+c) && b < (a+c) && c < (a+b));

	cout << j << endl;

	return 0;
}