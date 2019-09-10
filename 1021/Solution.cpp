#include <iostream>
using namespace std;

int main(){ 
	float a, b, x;

	cin >> a >> b;

	if(a == 0){ 
		if(b == 0) cout << "Всяко x e решение\n";
		else cout << "Няма решение\n";
	}
	else{ 
		x = b / a;
		cout << x << endl;
	}
	
	return 0;
}