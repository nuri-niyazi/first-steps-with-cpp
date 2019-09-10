#include <iostream>
using namespace std;

int main() {

	float a;
	int x;

	cin >> a >> x;

	switch(x){
		case 1:
			cout << 3*a << endl;
		break;
		case 2:
			cout << a*a << endl;
		break;
		case 3:
			cout << 3.14*a*a << endl;
		break;
	}

	return 0;
}