#include <iostream>
using namespace std;

int main() {

	int k, a, br = 0;

	cin >> k;
	
	for(int i = 0; i < k; i++){
		cin >> a;
		if(a % 5 == 0) br++;
	}

	cout << br << endl;

	return 0;
}