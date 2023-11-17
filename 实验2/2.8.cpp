#include<iostream>
using namespace std;
int main()
{
	float x, a, y;
	cout << "请输入一个a的值" << endl;
	cin >> a;
	for (float x = a;;) {
		y = (x + a / x) / 2;
		if (fabs(y - x) < 10e-5) {
			cout << y ;
			break;
			
		}
		else {
			x = y;
		}
		

	}
	

	return 0;

}