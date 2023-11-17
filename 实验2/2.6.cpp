#include<iostream>
using namespace std;
int main() {
	int a, b, i, c, d, j;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	c = (a > b ? a : b);
	d = (a > b ? b : a);
	for (int i = c;; i++) {
		if (i % a == 0 && i % b == 0) {
			cout << "最小公倍数为" << i << endl;
			break;
		}
	}
	for (int j = d;; j--) {
		if (a % j == 0 && b % j == 0) {
			cout << "最大公因数为" << j << endl;
			break;
		}

	}




}
