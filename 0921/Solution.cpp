#include <iostream>
using namespace std;

int main(){

	char s;
	
	cin >> s;

	if(s - 'a' >= 0) 
		cout << s - 'a' + 1 << endl;
	else
		cout << s - 'A' + 1 << endl;

	return 0;
}