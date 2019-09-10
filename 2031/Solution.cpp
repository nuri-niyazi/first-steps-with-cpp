#include <iostream>
using namespace std;

int main() {

	char a, b;
	int row, col;

	cin.get(a);
	cin.get(b);

	col = a - 'a' + 1;
	row = b - '0';

	cout << " abcdefgh\n";
	for(int i = 1; i <= 8; i++)
	{
		cout << i;
		for(int j = 1; j <= 8; j++)
		{
			if((i == row-2 && j == col-1) || (i == row-2 && j == col+1) || (i == row+2 && j == col-1) || (i == row+2 && j == col+1) || (i == row-1 && j == col-2) || (i == row-1 && j == col+2) || (i == row+1 && j == col-2) || (i == row+1 && j == col+2))
				cout << "X";
			else if(i == row && j == col)
				cout << "H";
			else
				cout << "O";
		}
		cout << endl;
	}

	return 0;
}