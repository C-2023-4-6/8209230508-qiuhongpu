#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "�����������ε�������" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "�����β�����" << endl;
	}
	else {
		cout << a + b + c << endl;
		if (a == b || b == c || a == c) {
			cout << "�������ǵ���������" << endl;
		}
		else {
			cout << "�����β��ǵ���������" << endl;
		}
	}
		





}