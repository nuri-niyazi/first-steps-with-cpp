#include <iostream>
using namespace std;

int main() {

	int a, mxn = 0;

	do
	{
		cin >> a;
		if((mxn == 0 || a > mxn) && a < 0) mxn = a; 
	}while(a != 0);

	cout << mxn << endl;
	
	return 0;
}