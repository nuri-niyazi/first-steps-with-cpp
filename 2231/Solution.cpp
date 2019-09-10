#include <iostream>
using namespace std;

int main() {

	int x1, y1, x2, y2, x, y, br = 0;

	cin >> x1 >> y1 >> x2 >> y2;

	do
	{
		cin >> x >> y;
		if(x1 <= x && x <= x2 && y1 <= y && y <= y2) br++;

	} while (x != 0 || y!= 0);	

	cout << br << endl;

	return 0;
}