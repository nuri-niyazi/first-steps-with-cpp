#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	if(n/10 == 9) cout << "devetdeset";
	if(n/10 == 8) cout << "osemdeset";
	if(n/10 == 7) cout << "sedemdeset";
	if(n/10 == 6) cout << "shestdeset";
	if(n/10 == 5) cout << "petdeset";
	if(n/10 == 4) cout << "chetirideset";
	if(n/10 == 3) cout << "trideset";
	if(n/10 == 2) cout << "dvadeset";
	
	if(n > 19 && n%10 != 0) cout << " i ";
	if(n > 19) n %= 10;

	switch(n){
		case 0: cout << "nula\n"; break;
		case 1: cout << "edno\n"; break;
		case 2: cout << "dve\n"; break;
		case 3: cout << "tri\n"; break;
		case 4: cout << "chetiri\n"; break;
		case 5: cout << "pet\n"; break;
		case 6: cout << "shest\n"; break;
		case 7: cout << "sedem\n"; break;
		case 8: cout << "osem\n"; break;
		case 9: cout << "devet\n"; break;
		case 10: cout << "deset\n"; break;
		case 11: cout << "edinadeset\n"; break;
		case 12: cout << "dvanadeset\n"; break;
		case 13: cout << "trinadeset\n"; break;
		case 14: cout << "chetirinadeset\n"; break;
		case 15: cout << "petnadeset\n"; break;
		case 16: cout << "shestnadeset\n"; break;
		case 17: cout << "sedemnadeset\n"; break;
		case 18: cout << "osemnadeset\n"; break;
		case 19: cout << "devetnadeset\n"; break;
	}

	return 0;
}