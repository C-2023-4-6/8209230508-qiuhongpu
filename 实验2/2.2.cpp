#include <iostream>
using namespace std;
int main()
{
	float i, a, b, c;
	cout << "ÇëÊäÈëÒ»¸öx" << endl;
	cin >> i;
	if (i > 0) {
		if (i < 1) {
			a = 3 - 2 * i;
			cout << a << endl;
		}
		else if (i < 5) {
			b = 2 / (4 * i) + 1;
			cout << b << endl;
		}
		else if (i < 10) {
			c = i * i;
			cout << c << endl;
		}
	}
	else {
		cout << "wrong" << endl;
	}
	return 0;

}