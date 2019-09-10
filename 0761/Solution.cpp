#include <iostream>
using namespace std;

int main(){
	int h, m, t;

	cin >> h >> m >> t;
	
	m += t;
	h += m / 60;
	m %= 60;
	h %= 24;

	cout << h << "h " << m << "m\n";
	
	return 0;
}