#include <iostream>
using namespace std;

int main() {

	int m, y;
	int months[12] = {31,28,31,30,31,30,31,30,30,31,30,31};
	
	cin >> m >> y;

	if(y % 4 == 0) months[1]++;

	cout << months[m-1] << endl;

	return 0;
}