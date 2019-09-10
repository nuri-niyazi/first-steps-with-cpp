#include <iostream>
using namespace std;

int main() {

	int n, ch1 = 0, ch2 = 0, ch3 = 0, mn, mx, tmp;

	cin >> n;

	mn = mx = n % 10;

	do
	{
		tmp = n % 10;
		if(tmp%2 == 0) { ch1++; ch2 += tmp; }
		if(tmp%2 != 0) ch3 += tmp;
		if(tmp > mx) mx = tmp;
		if(tmp < mn) mn = tmp;
		n /= 10;
	}while(n);

	if(ch2 > 9) { tmp = ch2 % 10; ch2 = ch2/10 + tmp; }
	if(ch3 > 9) { tmp = ch3 % 10; ch3 = ch3/10 + tmp; }

	cout << ch1 << ch2 << ch3 << mx-mn << endl;

	return 0;
}