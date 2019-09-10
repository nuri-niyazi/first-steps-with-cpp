#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a, b, c;

	cin >> a >> b >> c;

	cout << "knigi - " << ceil(float(a) / 15) << ' ';
	cout << "vestnici - " << ceil(float(b) / 15) << ' ';
	cout << "spisania - " << ceil(float(c) / 15) << endl;

	return 0;
}