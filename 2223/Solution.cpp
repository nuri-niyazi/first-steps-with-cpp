#include <iostream>
using namespace std;

int main() {

	int br1 = 0, br2 = 0, br3 = 0;
	char ch;

	while(!cin.eof())
	{
		cin.get(ch);
		if(ch == 's') br1++;
		if(ch == 'd') br2++;
		if(ch == 'o') br3++;
	}

	if(br1 >= br2 && br1 >= br3) cout << "s " << br1 << endl;
	else if(br2 >= br1 && br2 >= br3) cout << "d " << br2 << endl;
	else if(br3 >= br1 && br2 <= br3) cout << "o " << br3 << endl;
	
	return 0;
}