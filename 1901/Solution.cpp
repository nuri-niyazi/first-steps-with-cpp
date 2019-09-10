#include <iostream>
using namespace std;

int main() {

	int m, n, l;
	long pr;

	cin >> m >> n >> l;
	pr = m * n;

	while(m != n)
	{
		if(m < n) n -= m;
		else m -= n;
	}

	cout << (l * m / pr) + 1 << endl;
	
	return 0;
}