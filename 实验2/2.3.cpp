#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三角形的三条边" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "三角形不存在" << endl;
	}
	else {
		cout << a + b + c << endl;
		if (a == b || b == c || a == c) {
			cout << "三角形是等腰三角形" << endl;
		}
		else {
			cout << "三角形不是等腰三角形" << endl;
		}
	}
		





}