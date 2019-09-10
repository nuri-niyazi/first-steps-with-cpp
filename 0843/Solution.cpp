#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int d, m, y;
	int d1, d2, m1, m2, y1, y2, y3, y4, s, s1, s2;

	cin >> d >> m >> y;

	d1 = d / 10;
	d2 = d % 10;
	
	m1 = m / 10;
	m2 = m % 10;

	y1 = y / 1000;
	y2 = y / 100 % 10;
	y3 = y / 10 % 10;
	y4 = y % 10;

	s = d1 + d2 + m1 + m2 + y1 + y2 + y3 + y4;

	if (s > 9){
		s1 = s / 10;
		s2 = s % 10;
		s = s1 + s2;
	}
	
	if (s > 9){
		s1 = s / 10;
		s2 = s % 10;
		s = s1 + s2;
	}

	cout << s << endl;

	return 0;
}