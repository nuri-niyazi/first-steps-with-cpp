#include <iostream>
using namespace std;

int main(){

	char s1;
	
	cin >> s1;

	cout << char('A' + (25 - (s1 - 'A'))) << endl;

	return 0;
}