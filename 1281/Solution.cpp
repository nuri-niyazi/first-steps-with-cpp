#include <iostream>
using namespace std;

int main() {

	int a, b, c;

	cin >> a >> b >> c;

	if(a == 1){
		cout << b/2 << endl;
	}
	else if(a == 2){
		cout << (b/4 > c/2 ? c/2 : b/4) << endl;
	}
	else{
		cout << (b/5 > c/4 ? c/4 : b/5) << endl;
	}

	return 0;
}