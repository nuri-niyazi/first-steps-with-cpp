#include <iostream>
using namespace std;

int main() {

	int s;

	cin >> s;

	for(int i = 1; i < s-2; i++)
	{
		for(int j= i + 1; j < s-1; j++)
		{
			int k = s-i-j;
			if(k > i && k > j)
				cout << i << '+' << j << '+' << k << ' ';
		}
	}

	cout << endl;

	return 0;
}