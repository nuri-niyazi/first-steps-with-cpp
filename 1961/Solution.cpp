#include <iostream>
using namespace std;

int main() {

	int n, l = 0;
	
	cin >> n;

	for(int x = 0; x < n; x++)
	{
		for(int y = x; y < n; y++)
		{
			for(int z = y; z < n; z++)
			{
				if((x*x + y*y + z*z) == n)
				{
					cout << x << ' ' << y << ' ' << z << endl;
					l = 1;
				}
			}
		}
	}

	if(!l) cout << "No\n";

	return 0;
}