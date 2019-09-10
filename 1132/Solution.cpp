#include <iostream>
using namespace std;

int main() {

	int a, b, c, d, u, v, x, y;
	int t1, t2, t3, t4;

	cin >> a >> b >> c >> d >> u >> v >> x >> y;

	t1 = a > c ? a : c;
	t2 = a > d ? a : d;
	t3 = b > d ? b : d;
	t4 = b > c ? b : c;

	if((a + c <= u && t3 <= v) || (a + c <= v && t3 <= u) || (a + d <= u && t4 <= v) || (a + d <= v && t4 <= u) || (b + c <= u && t2 <= v) || (b + c <= v && t2 <= u) || (b + d <= u && t1 <= v) || (b + d <= v && t1<= u))
		cout << "Yes ";
	else
		cout << "No ";

	if((a + c <= x && t3 <= y) || (a + c <= y && t3 <= x) || (a + d <= x && t4 <= y) || (a + d <= y && t4 <= x) || (b + c <= x && t2 <= y) || (b + c <= y && t2 <= x) || (b + d <= x && t1 <= y) || (b + d <= y && t1<= x))
		cout << "Yes\n";
	else
		cout << "No\n";	

	return 0;
}