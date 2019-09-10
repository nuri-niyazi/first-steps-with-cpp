#include <iostream>
using namespace std;

int main() {

	int n, end, br;

	cin >> n;
	end = n/2;

	for( int i = 2; i <= end; i++)
	{
		br = 0;
		if(n % i == 0)
		{
			while(n%i == 0)
			{
				n /= i;
				br++;
			}
			cout << i << '-' << br << ' ';
		}
	}
	cout << endl;

	return 0;
}