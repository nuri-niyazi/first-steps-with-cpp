#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b, c, d, s;

	cin >> a >> b >> c >> d;
	
	s = ceil(float(a) / c) * ceil(float(b) / d);
	if( s >  ceil(float(a) / d) * ceil(float(b) / c))
		s = ceil(float(a) / d) * ceil(float(b) / c);

	cout << s << endl;

	return 0;
}