#include <iostream>
using namespace std;

int main(){ 
	int n;

	cin >> n;

	if(n > 9){
		if(n - 9 < 10) cout << '0';
		cout << n - 9 << ".02.2006\n";
	}
	else cout << 22 + n << ".01.2006\n";

	return 0;
}