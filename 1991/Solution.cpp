#include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	for(int i = 0; i < (2*n+2); i++)
	{
		if(i % 2 != 0)
		{
			for(int j = 0; j < n; j++) 
				cout << ' ';
			cout << "*\n";
		}
		else
		{
			for(int j = 0; j < n-(i/2); j++) cout << ' ';
			for(int j = 0; j < i+1; j++) cout << '*';
			cout << endl;
		}
	}

	return 0;
}