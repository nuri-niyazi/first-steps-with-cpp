#include <iostream>
using namespace std;

int main() {

	int br = 0, mbr = 0;
	char ch;
	
	do
	{
		cin.get(ch);
		if(ch == ' ' || ch == '.')
		{
			if(br > mbr) mbr = br;
			br = 0;
		}
		else br++;
	}while(ch != '.');

	cout << mbr << endl;

	return 0;
}