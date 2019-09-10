#include <iostream>
using namespace std;

int main() {

	int m, n;
	long pr;

	cin >> m >> n;
	pr = m * n;

	while(m != n)
	{
		if(m < n) n -= m;
		else m -= n;
	}

	cout << pr/m << endl;
	
	return 0;
}