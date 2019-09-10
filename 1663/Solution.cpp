#include <iostream>
using namespace std;

int main() {

	int sum, s1, s2, d, m, y, br = 0;

	do
	{
		cin >> d >> m >> y;
		sum = d/10 + d%10 + m/10 + m%10 + y/1000 + y/100%10 + y/10%10 + y%10;
		s1 = sum / 10;
		s2 = sum % 10;
		if((s1 == s2 || s1 == 0) && s2 != 0) br++;
	}while(s1 != s2 || s2 != 0);

	cout << br << endl;

	return 0;
}