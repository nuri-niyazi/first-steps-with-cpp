#include <iostream>
using namespace std;

int main() {

	int br = 0;
	char ch, ch1, ch2;

	cin.get(ch);
	ch1 = ch2 = ch;

	while(!cin.eof())
	{
		cin.get(ch);
		if((ch == ' ' || ch == '\n') && ch1 == ch2) br++;
		if(ch2 == ' ' || ch2 == '\n') ch1 = ch;
		ch2 = ch;
	}

	if(ch1 == ch2) br++;

	cout << br << endl;

	return 0;
}