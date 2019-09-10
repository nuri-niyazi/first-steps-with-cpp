#include <iostream>
using namespace std;

int main(){
	char c1, c2, c3, c4, c5, c6, c7; 
	int d, l;
	
	cin.get(c1); cin.get(c2);
	cin.get(c3); cin.get(c4);
	cin.get(c5); cin.get(c6);
	cin.get(c7);
	
	l = c1 == c7 || c1 == c7 + 'A' - 'a' || c7 == c1 + 'A' - 'a';
	l = l && (c2 == c6 || c2 == c6 + 'A' - 'a' || c6 == c2 + 'A' - 'a');
	l = l && (c3 == c5 || c3 == c5 + 'A' - 'a' || c5 == c3 + 'A' - 'a');
	d = l ? ('A' - 'a') : ('a' - 'A');
	
	if ((l && c1 >= 'a' && c1 <= 'z') || (!l && c1 >= 'A' && c1 <= 'Z')) c1 += d;
	if ((l && c2 >= 'a' && c2 <= 'z') || (!l && c2 >= 'A' && c2 <= 'Z')) c2 += d;
	if ((l && c3 >= 'a' && c3 <= 'z') || (!l && c3 >= 'A' && c3 <= 'Z')) c3 += d;
	if ((l && c4 >= 'a' && c4 <= 'z') || (!l && c4 >= 'A' && c4 <= 'Z')) c4 += d;
	if ((l && c5 >= 'a' && c5 <= 'z') || (!l && c5 >= 'A' && c5 <= 'Z')) c5 += d;
	if ((l && c6 >= 'a' && c6 <= 'z') || (!l && c6 >= 'A' && c6 <= 'Z')) c6 += d;
	if ((l && c7 >= 'a' && c7 <= 'z') || (!l && c7 >= 'A' && c7 <= 'Z')) c7 += d;

	cout << c1 << c2 << c3 << c4 << c5 << c6 << c7 << endl;
	
	return 0;
}