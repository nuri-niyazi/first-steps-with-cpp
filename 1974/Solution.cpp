#include <iostream>
using namespace std;

int main() {

	int n, br = 0;

	cin >> n;

	for(int i = 0; i <= n/3; i++)
	{
		if((n - i * 3) % 4 == 0) br++;
	}

	if(br) cout << br << endl;
	else cout << "No\n";
	
	return 0;
}