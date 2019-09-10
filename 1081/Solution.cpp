#include <iostream>
using namespace std;

int main() {

	int h, m, wh, wm, st, mz, tb, ob, p, lh, lm;

	cin >> h >> m;
	cin >> wh >> wm;
	cin >> st >> mz >> tb;

	if (m >= 5) 
		m = m - 5;
	else {
		h = h - 1; 
		m = m + 60 - 5;
	}
	
	p = 4 * (st + tb); 
	ob = st + mz + tb + p + wm;
	lh = wh + ob / 60;
	lm = ob % 60;
	
	if (lh < h) 
		cout << "No" << endl;
	else if ((lh == h) && (lm <= m))
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	
	return 0;
}