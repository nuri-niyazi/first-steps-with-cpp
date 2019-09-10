#include <iostream>
#include <cmath>
using namespace std;

int main(){ 
	float x1,y1,x2,y2,a,b,p;

	cin >> x1 >> y1 >> x2 >> y2;
	
	a = fabs(x1 - x2);
	b = fabs(y1 - y2);
	p = 2 * (a + b);

	cout << p << endl;

	return 0;
}