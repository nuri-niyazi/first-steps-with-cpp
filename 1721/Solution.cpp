#include <iostream>
using namespace std;

int main() {

	int n, a, b, c, mx, mn;

	cin >> n;

	for(int i = 0; i <= n; i++)
	{
		cin >> a >> b;
		if(a > b) { c = a; a = b; b = c; }
		if(i == 0) { mx = b - a; mn = b - a; }
		else
		{
			if(mx < b - a) mx = b - a;
			if(mn > b - a) mn = b - a;
		}
	}

	cout << mx << ' ' << mn << endl;
	
	return 0;
}