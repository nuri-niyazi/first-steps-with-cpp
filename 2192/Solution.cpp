#include <iostream>
using namespace std;

int main() {

	int bra = 0, brb = 0;
	char ch;

	do
	{
		cin.get(ch);
		if(ch == 'a' || ch == 'A') 
			bra++;
		else if(ch == 'b' || ch == 'B') 
			brb++;
	}while(ch != '*');

	cout << (bra > brb ? "a" : "b") << endl;

	return 0;
}