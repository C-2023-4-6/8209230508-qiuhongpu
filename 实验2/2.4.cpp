#include <iostream>
using namespace std;
int main() {
	float x, y;
	char z;
	cin >> x >> z >> y;
	switch (z) {
	case'+': cout << x + y << endl; break;
	case'-': cout << x - y << endl; break;
	case'*': cout << x * y << endl; break;
	case'/':if (y != 0) { 
		cout << x / y << endl; break;
	}
		   else {
		cout << "����" << endl; break;
	}
	case'%': cout << int(x) % int(y) << endl; break;
	default: cout << "����" << endl; break;

	}
	return 0;
}