#include<iostream>
using namespace std;
int main() {
	int a, b, i, c, d, j;
	cout << "��������������" << endl;
	cin >> a >> b;
	c = (a > b ? a : b);
	d = (a > b ? b : a);
	for (int i = c;; i++) {
		if (i % a == 0 && i % b == 0) {
			cout << "��С������Ϊ" << i << endl;
			break;
		}
	}
	for (int j = d;; j--) {
		if (a % j == 0 && b % j == 0) {
			cout << "�������Ϊ" << j << endl;
			break;
		}

	}




}
