#include <iostream>
using namespace std;

int main() {

	int a, mx, mn;

	cin >> a;
	mx = mn = a;

	while(a != 0)
	{
		cin >> a;
		if(a < mn && a != 0) mn = a;
		if(a > mx && a != 0) mx = a;		
	}

	cout << mx << ' ' << mn << endl;

	return 0;
}