#include <iostream>
using namespace std;

int main() {

	int n = 0, s = 0;
	char ch;

	do
	{
		cin.get(ch);
		if(ch >= '0' && ch <= '9')
			n = n * 10 + (ch - '0');
		else if(n)
		{
			s += n;
			n = 0;
		}

	}while(ch != '.');

	cout << s << endl;
	
	return 0;
}