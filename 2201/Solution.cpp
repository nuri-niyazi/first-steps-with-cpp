#include <iostream>
using namespace std;

int main() {

	int br1 = 0, br2 = 0, br3 = 0;
	char ch;

	while(!cin.eof())
	{
		cin.get(ch);
		if(ch == 'k' || ch == 'K') 
			br1++;
		else if(ch == 'e' || ch == 'E') 
			br2++;
		else if(ch == 'y' || ch == 'Y') 
			br3++;
	}

	if(br1 && br2 && br3) cout << "Yes\n";
	else cout << "k - " << br1 << " e - " << br2 << " y - " << br3 << endl;

	return 0;
}