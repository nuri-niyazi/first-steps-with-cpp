#include <iostream>
using namespace std;

int main() {

	int br = 0;
	char ch, ch2 = ' ';

	do
	{
		cin.get(ch);
		if(ch == 'b' && ch2 == 'c') br++;
		ch2 = ch;
	}while(ch != '.');

	cout << br << endl;
	
	return 0;
}