#include <iostream>
using namespace std;

int main() {

	int n;
	char a;

	cin >> n >> a;

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

	return 0;
}