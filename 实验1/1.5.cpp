#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float i, j;
	cout << "�����뻪���¶�" << endl;
	cin >> i;
	j = (i - 32) / 1.8;
	cout << "�����¶�Ϊ" << fixed << setprecision(2) << j << "��" << endl;
	return 0;



}