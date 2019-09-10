#include <iostream>
using namespace std;

int main() {

	int k, m, l, n, t1, t2;

	cin >> k >> m >> l >> n;

	t1 = k * 60 + m;
	t2 = l * 60 + n;

	if(t1 > t2){ 
		if((t1-t2) % 60 == 0) cout << (24 - (t1 - t2) / 60);
		else cout << (23 - (t1 - t2) / 60);
		cout << ' ' << ((60 - (t1 - t2) % 60) % 60) << ' ' << "K\n";
	}
	else cout << ((t2 - t1) / 60) << ' ' << ((t2 - t1) % 60) << ' ' << "I\n";

	return 0;
}