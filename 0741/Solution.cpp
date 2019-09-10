#include <iostream>
using namespace std;

int main(){
	int nk, ng, pk, pg, ok, og;

	cin >> nk >> ng >> pk >> pg;
	
	ng = nk * 1000 + ng;
	pg = pk * 1000 + pg;
	og = ng - pg;
	ok = og / 1000;
	og = og % 1000;
	
	cout << ok << "kg " << og <<"g\n";
	return 0;
}