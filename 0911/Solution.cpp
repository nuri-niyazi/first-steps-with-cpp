#include <iostream>
using namespace std;

int main() {

	int d = 'A' - 'a';
	char ch;
	
	cin.get(ch);
	
	ch -= d;

	cout << ch << endl;

	return 0;
}