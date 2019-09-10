#include <iostream>
using namespace std;

int main() {

	float a, b, mxa, mnb;
	int n, j = 1;

	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		if(i == 1 || (mxa < a || (mxa == a && mnb > b))) 
		{ 
			mxa = a; 
			mnb = b; 
			j = i; 
		} 
	}

	cout << j << endl;

	return 0;
}