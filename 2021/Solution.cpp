#include <iostream>
using namespace std;

int main() {

	int n, m;

	cin >> m >> n;

	for(int i = 0; i < (m-1)*n+1; i++)
		cout << "* ";
	cout << endl;

	for(int i = 0; i < m-2; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << "* ";
			for(int k = 0; k < m-2; k++)
				cout << "  ";
		}
		cout << "*\n";
	}

	for(int i = 0; i < (m-1)*n+1; i++)
		cout << "* ";
	cout << endl;

	return 0;
}