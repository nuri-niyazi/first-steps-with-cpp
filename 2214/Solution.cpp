#include <iostream>
using namespace std;

int main() {

	int br = 0, lwrd = 0;
	char ch;

	do
	{
		cin.get(ch);
		if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
		{
			lwrd = 0;
		}
		else
		{
			lwrd++;
			if(lwrd == 2 && (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')) 
				br++;
		}
	}while(ch != '.');

	cout << br << endl;
	
	return 0;
}