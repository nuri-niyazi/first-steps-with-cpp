#include <iostream>
using namespace std;

int main() {

	int br = 0;
	char ch;

	do
	{
		cin.get(ch);
		if(ch == '\n') br++;
	}while(ch != '.');

	cout << br+1 << endl;

	return 0;
}