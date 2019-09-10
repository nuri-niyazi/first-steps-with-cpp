#include <iostream>
using namespace std;

int main() {

	int n, k, org, i = 0, j, s = 1;

	cin >> n >> k;
	org = n;

	do
	{
		i++;
		n /= 10;
	}while(n);

	j = i-k; i = 0;

	do
	{
		if(i != j) { n += (org%10)*s; s *=10; }
		org /= 10; 
		i++;
	}while(org);

	cout << n << endl;

	return 0;
}