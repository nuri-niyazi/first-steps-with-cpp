#include <iostream>
using namespace std;

int main() {

	int m, n;

	cin >> m >> n;

	while(m != n)
	{
		if(m < n) n -= m;
		else m -= n;
	}

	cout << m << endl;
	
	return 0;
}