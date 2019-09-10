#include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	for(int i = 0; i < 2*(n-1)+1; i++)
	{
		for(int j = 0; j < (i < n ? i : 2*(n-1)-i); j++)
			cout << " ";

		for(int j = 0; j < 2 && i != n-1; j++)
		{
			cout << "*";
			for(int k = 0; k < (i < n ? n-i-2 : i-n); k++)
				cout << " ";
		}
		cout << "*\n";
	}

	return 0;
}