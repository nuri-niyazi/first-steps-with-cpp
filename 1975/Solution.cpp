#include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	for(int i = 0; i <= n/4; i++)
	{
		for(int j = 0; j <= n/6; j++)
		{
			int tmp = n - i * 4 - j * 6;
			if(tmp % 3 == 0 && tmp >= 0)
				cout << i << ' ' << j << ' ' << tmp / 3 << endl;
		}
	}

	return 0;
}