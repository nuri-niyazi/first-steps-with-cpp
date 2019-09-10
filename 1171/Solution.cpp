#include <iostream>
using namespace std;

int main() {

	int d, m, y;
	int months[12] = {31,28,31,30,31,30,31,30,30,31,30,31};
	
	cin >> d >> m >> y;

	if(y % 4 == 0) months[1]++;
	
	d += 7;

	if((d - months[m-1])>0){
		d = d - months[m-1];
		m += 1;
	}

	if(m > 12){
		y += 1;
		m -= 12;
	}
	
	cout << d << '-' << m << '-' << y << endl;

	return 0;
}