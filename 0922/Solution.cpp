#include <iostream>
using namespace std;

int main(){

	char s1, s2;
	
	cin >> s1 >> s2;

	if(s1 > s2) 
		cout << int(s1) << endl;
	else
		cout << int(s2) << endl;

	return 0;
}