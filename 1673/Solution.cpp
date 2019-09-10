#include <iostream>
using namespace std;

int main() {

	int a, b = -1, br = 1, mbr = 1;

	do
	{
		cin >> a;
		if(a == b) br++;
		else{
			if(mbr < br) mbr = br;
			br = 1;
		}
		b = a;
	}while(a != 0);

	cout << mbr << endl;

	return 0;
}