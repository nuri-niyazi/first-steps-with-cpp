#include <iostream>
using namespace std;

int main() {

	int br = 0, lwrd = 0, l = 0;
	char ch;

	do
	{
		cin.get(ch);
		if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
		{
			if(lwrd && (l == 2)) br++;
			lwrd = 0;
			l = 0;
		}
		else
		{
			lwrd++;
			if(ch == 'i') l++;
		}
	}while(ch != '.');

	cout << br << endl;
	
	return 0;
}