#include <iostream>
#include <math.h>
using namespace std;

int main(){	

	float l, h, m, s; 
	int b;
	
	cin >> l >> h >> m;
	
	s = l * h; 
	b = ceil( s / m );
	
	cout << b << endl;
	
	return 0;
}