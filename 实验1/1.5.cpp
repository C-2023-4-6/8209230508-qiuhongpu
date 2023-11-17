#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float i, j;
	cout << "请输入华氏温度" << endl;
	cin >> i;
	j = (i - 32) / 1.8;
	cout << "摄氏温度为" << fixed << setprecision(2) << j << "度" << endl;
	return 0;



}