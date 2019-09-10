#include <iostream>
using namespace std;

int main() {

	int sum = 0;
	char ch;

	do
	{
		cin.get(ch);
		if(ch >= '0' && ch <= '9')
		{
			sum += (int)(ch-'0');
		}	
	}while(ch != '.');

	cout << sum << endl;
	
	return 0;
}