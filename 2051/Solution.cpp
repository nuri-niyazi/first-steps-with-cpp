#include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		if(i <= n/2) cout << "*";
		else cout << " ";
		for(int j = 0; j < n-2; j++)
		{
			if(i == n/2)
				cout << "*";
			else
				cout << " ";
		}
		cout << "* *";
		for(int j = 0; j < n-2; j++)
		{
			if(i == n/2)
				cout << "*";
			else
				cout << " ";
		}
		cout << "* *";
		if(i == 0)
		{
			for(int j = 0; j < n-1; j++)
				cout << "*";
		}
		cout << endl;
	}

	return 0;
}