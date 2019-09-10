#include <iostream>
using namespace std;

int main(){
	char ch;

	cin.get(ch);

	if(ch == 'z') ch -= 26;
	ch++;
	
	cout << ch << endl;	
	
	return 0;
}