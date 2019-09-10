#include <iostream>
using namespace std;

int main() {

	int br = 0;
	long s = 0;
	char ch;

	do
	{
		cin.get(ch);
		if(ch == ' ' || ch == '.')
		{	
			if(s % 2 == 0) br++;
			s = 0;
		}
		else
		{
			s += (int)ch;
		}

	}while(ch != '.');

	cout << br << endl;
	
	return 0;
}