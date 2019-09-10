#include <iostream>
using namespace std;

int main() {

	int m, n, br = 0;

	cin >> m >> n;

	for(int i = m; i <= n; i++){
		if(i % 3 == 0) br++;
	}

	cout << br << endl;

	return 0;
}