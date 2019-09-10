#include <iostream>
using namespace std;

int main() {

	int bra = 0, brb = 0;
	char ch;

	do
	{
		cin.get(ch);
		if(ch == '(') 
			bra++;
		else if(ch == ')') 
			brb++;
	}while(ch != '*');

	if(bra == brb) cout << "Yes\n";
	else cout << bra - brb << endl;

	return 0;
}