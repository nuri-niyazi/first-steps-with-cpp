#include <iostream>
using namespace std;

int main() {

	int br = 0;
	char ch, ch1, ch2;

	cin.get(ch);
	ch2 = ch1 = ch;

	while(ch != '.')
	{
		cin.get(ch);
		
		if((ch2 == 'o' || ch2 == 'O') && (ch1 == 'n' || ch1 == 'N') && (ch == 'e' || ch == 'E')) 
			br++;

		ch2 = ch1;
		ch1 = ch;		
	}

	cout << br << endl;
	
	return 0;
}