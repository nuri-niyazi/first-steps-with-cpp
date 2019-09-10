#include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	for(int a = 1; a <= n; a++)
	{
		for(int b = a+1; b <= n; b++)
		{
			for(int c = b+1; c <= n; c++)
			{
				if((a+b > c) && (a+c > b) && (b+c > a))
					cout << a << ' ' << b << ' ' << c << endl;
			}
		}
	}
	
	return 0;
}