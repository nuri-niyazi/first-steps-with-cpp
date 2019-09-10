#include <iostream>
using namespace std;

int main() {

	int a, mn;

	cin >> a;
	mn = a;

	while(a != 0){
		cin >> a;
		if(mn > a && a != 0) mn = a;
	}

	cout << mn << endl;

	return 0;
}