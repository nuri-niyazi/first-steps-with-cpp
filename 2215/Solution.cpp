#include <iostream>
using namespace std;

int main() {

	int br1 = 0, br2 = 0, br3 = 0, l1 = 0, l2 = 0, l3 = 0;
	char ch;

	do
	{
		cin.get(ch);
		if(!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
		{
			if(l1) br1++;
			l1 = 0;
		}
		else
		{
			l1++;
		}

		if(ch < '0' || ch >'9')
		{
			if(l2) br2++;
			l2 = 0;
		}
		else
		{
			l2++;
		}		

		if(ch != '*')
		{
			if(l3) br3++;
			l3 = 0;
		}
		else
		{
			l3++;
		}		
	}while(ch != '.');

	cout << br1 << ' ' << br2 << ' ' << br3 << endl;
	
	return 0;
}