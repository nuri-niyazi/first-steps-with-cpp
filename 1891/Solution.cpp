#include <iostream>
using namespace std;

int main() {

	int n, end, br = 0;

	cin >> n;
	end = n/2;

	cout << n << " = ";

	for( int i = 2; i <= end; i++)
	{
		while(n%i == 0)
		{
			n /= i;
			br++;
			if(br == 1) cout << i ;
			else cout << '.' << i;				
		}
	}

	cout << endl;

	return 0;
}