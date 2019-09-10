#include <iostream>
using namespace std;

int main(){
	int k, e, d, s;

	cin >> k;
	
	e = k % 10; // отделяне на единици
	d = k / 10 % 10; // отделяне на десетици
	s = k / 100; // отделяне на стотици

	cout << e << d << s << endl;
	
	return 0;
}