#include <iostream>
using namespace std;

int main() {

	int nch = 0, nwrd = 0, nsnt = 0, lwrd = 0;
	char ch;

	while(!cin.eof())
	{
		cin.get(ch);
		nch++;
		if((ch == ',' || ch == ':' || ch == ';' || ch == '!' || ch == '?' || ch == '.' || ch == ' ') && lwrd)
		{
			nwrd++;
			if(ch == '!' || ch == '?' || ch == '.')
				nsnt++;
			lwrd = 0;
		}
		else
			lwrd++;
	}

	if(lwrd && ch != ',' && ch != ':' && ch != ';' && ch != '!' && ch != '?' && ch != '.' && ch != ' ')
	{
		nwrd++;
		nsnt++;
	}

	cout << nch << ' ' << nwrd << ' ' << nsnt << endl;

	return 0;
}