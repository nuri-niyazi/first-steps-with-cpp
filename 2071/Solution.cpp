#include <iostream>
using namespace std;

int main() {

	int n, m;
	char a;

	cin >> m >> n >> a;

	for(int i = 0; i < n-1; i++)
	{
		for(int j = 0; j < n-i-1; j++) cout << ' ';
		cout << a;
		for(int j = 0; j < 2*(i-1)+1; j++) cout << ' ';
		if(2*(i-1)+1 > 0) cout << a;
		cout << endl;
	}

	for(int i = 0; i < n; i++)
		cout << a << ' ';
	cout << endl;

	if(m)
	{
		for(int i = 0; i < (n%2==0 ? n/2-1 : n/2) ; i++)
		{
			for(int j = 0; j < (n%2==0 ? n/2-1 : n/2); j++)
				cout << "  ";
			cout << a << endl;
		}
	}
	else
	{
		for(int i = 0; i < n-3; i++)
		{
			cout << "  " << a << " ";
			for(int j = 0; j < n-4; j++)
			{
				if(i == n-4) cout << a << " ";
				else cout << "  ";
			}
			cout << a << endl;
		}
	}

	return 0;
}