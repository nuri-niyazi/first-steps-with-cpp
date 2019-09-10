#include <iostream>
using namespace std;

int main() {

	int s, x, y, z, tx, ty, tz, m;

	cin >> s >> x >> y >> z;
	m = s;

	for(int i = 0; i <= s/x; i++)
	{
		for(int j = 0; j <= s/y; j++)
		{
			int k = (s - i*x - j*y) / z;
			if((s - i*x - j*y - k*z) >= 0 && (s - i*x - j*y - k*z) < m && k >= 0)
			{
				tx = i;
				ty = j;
				tz = k;
				m = s - i*x - j*y - k*z;
			}
		}
	}

	cout << tx << ' ' << ty << ' ' << tz << ' ' << m << endl;
	return 0;
}