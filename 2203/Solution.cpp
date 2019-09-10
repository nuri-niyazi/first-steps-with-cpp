#include <iostream>
using namespace std;

int main() {

	int isOk = 1;
	char ch;

	do
	{
		cin.get(ch);
		if(ch != '.' && !((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == ' '))
			isOk = 0;
	}while(ch != '.');

	if(isOk) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}