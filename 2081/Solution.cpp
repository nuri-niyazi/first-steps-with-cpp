#include <iostream>
using namespace std;

int main() {

	int m, n, mx;

	cin >> n >> m;

	mx = m >= n ? m+1 : n;

	for(int i = 1; i <= mx; i++)
	{
		int lmt = i <= mx-n ? (2*n > m ? (2*n-m+i-1) : i-1) : (2*n > m ? mx-i : (mx-i+m-2*n)); 
		for(int j = 0; j < lmt; j++)
			cout << " ";
		for(int j = 0; j < i-(mx-n); j++)
			cout << "0 ";
		for(int j = 0; j < mx-i; j++)
		{
			if(i > mx-m-1)
				cout << "1 ";
			else 
				cout << "  ";
		}
		for(int j = 0; j < i-(mx-n); j++)
			cout << "0 ";
		cout << endl;
	}
	return 0;
}