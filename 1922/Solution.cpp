#include <iostream>
using namespace std;

int main() {

	int a, b, n, end, br = 0;

	cin >> a >> b;
	for(int j = a; j <= b; j++ )
	{
		n = j;
		end = j/2;
		for( int i = 2; i <= end; i++)
		{
			if(n % i == 0)
			{
				while(n%i == 0)
				{
					n /= i;
					br++;
				}
			}
		}
		if(n > 1)
		{
			br++;
		}
	}
	cout << br << endl;

	return 0;
}