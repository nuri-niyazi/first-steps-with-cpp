#include <iostream>
using namespace std;

int main() {

	int s, l = 0;
	
	cin >> s;

	for(int i = 0; i < s/2; i++)
	{
		if((s - 2 * i) % 5 == 0)
		{
			cout << i << ".2" << "+" << ((s - 2 * i) / 5) << ".5" << ' ';
			l = 1;
		} 
	}

	if(!l) cout << "No\n";
	else cout << endl;

	return 0;
}
