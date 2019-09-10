#include <iostream>
using namespace std;

int main(){
	char c; 
	int br = 0;
	
	cin >> c;
	if(c == 'N' || c == 'n' || c == 'E' || c == 'e' || c == 'T' || c == 't') br++;
	
	cin >> c;
	if(c == 'N' || c == 'n' || c == 'E' || c == 'e' || c == 'T' || c == 't') br++;
	
	cin >> c;
	if(c == 'N' || c == 'n' || c == 'E' || c == 'e' || c == 'T' || c == 't') br++;

	cout << br << endl;
}