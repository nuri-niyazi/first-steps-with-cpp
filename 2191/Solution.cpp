#include <iostream>
using namespace std;

int main() {

	int br = 0, lsent = 0;
	char ch;

	do
	{
		cin.get(ch);
		if(ch == '!' || ch == '.' || ch == '?' || ch == '\n') 
		{
			br++;
			lsent = 0;
		}
		else if(ch != '*') lsent++;
	}while(ch != '*');

	if(lsent) br++;

	cout << br 	<< endl;

	return 0;
}