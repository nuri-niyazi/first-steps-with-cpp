#include <iostream>
using namespace std;

int main(){
	int k, e, d, s;

	cin >> k;
	
	e = k % 10; // единици
	d = k / 10 % 10; // десетици
	s = k / 100; // стотици

	cout << e + d + s << endl;
	
	return 0;
}